#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * main - accepts arguements.
 * @argc: number of arguements it accepts.
 * @argv: arguement vector.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int source, destination;
	ssize_t ch;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (source == -1 || destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open or create file(s).\n");
		exit(98);
	}
	while ((ch = read(source, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(destination, buffer, ch) != ch)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(source) == -1 || close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}
	return (0);
}
