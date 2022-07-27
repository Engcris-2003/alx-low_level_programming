#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int cf;
	int i, j;

	if (filename == NULL)
		return (-1);
	cf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cf == -1)
		return (-1);
	if (text_content == NULL)
		text_content = NULL;
	for (i = 0; text_content[i]; i++)
		;
	j = write(cf, text_content, i);

	if (j == -1)
		return (-1);

	close(cf);
	return (1);
}
