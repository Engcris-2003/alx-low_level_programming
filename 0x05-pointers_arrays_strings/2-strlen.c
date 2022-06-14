#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: character
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
