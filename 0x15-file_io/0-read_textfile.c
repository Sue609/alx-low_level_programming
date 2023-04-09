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
	size_t n;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	while ((n = read(fp, buf, sizeof(buf))) > 0 && letters > 0)
	{
		if (n > letters)
			n = letters;
		if (write(STDOUT_FILENO, buf, n) == -1)
		{
			close(fp);
			return (0);
		}

	letters -= n;
	}
	close(fp);
	return (letters == 0 ? 1 : 0);
}
