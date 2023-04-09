#include <string.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: Null terminated string.
 *
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);
}
