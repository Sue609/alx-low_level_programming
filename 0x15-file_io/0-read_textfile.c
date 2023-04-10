#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile -  function that reads a text file and prints.
 * @filename: this is the name of the file.
 * @letters: number of letters it should read and print
 *
 * Return: NULL or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t n = 0, len;
	char *buf;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fp);
		return (0);
	}

	len = read(fp, buf, letters);
	close(fp);

	if (len == (size_t)-1)
	{
		free(buf);
		return (0);
	}
	len = write(STDOUT_FILENO, buf, len);

	free(buf);

	if (n != len)
		return (0);
	return (len);
}
