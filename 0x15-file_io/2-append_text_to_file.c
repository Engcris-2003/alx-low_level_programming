#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is NULL terminated string to add at the end of a file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int apt;
	int i, j;

	if (filename == NULL)
		return (-1);
	apt = open(filename, O_WRONLY | O_APPEND);
	if (apt == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		j = write(apt, text_content, i);

		if (j == -1)
			return (-1);
	}

	close(apt);

	return (1);
}
