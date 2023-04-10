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
	int source, destination, ch;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
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
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}
	return (0);
}
