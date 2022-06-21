#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: character
 * @c: character
 * Return: c in srting s or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (c == s[j])
			s += j;
			return (s);
	}
	return ('\0');
}
