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
	FILE *fp;
	size_t n;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((n = fread(buf, 1, sizeof(buf), fp)) > 0 && letters > 0)
	{
		if (n > letters)
			n = letters;
		fwrite(buf, 1, n, stdout);
		letters -= n;
	}
	fclose(fp);
	return (letters == 0 ? 1 : 0);
}
