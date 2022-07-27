#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the filename
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	int rt;
	char *buffer;

	if (filename == NULL)
		return (0);

	rt = open(filename, O_RDONLY);

	if (rt == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	i = read(rt, buffer, letters);
	j = write(STDOUT_FILENO, buffer, i);

	close(rt);
	free(buffer);
	return (j);
}
