#include "main.h"
/**
 * _strchr - find character in a string
 * @s: string
 * @c: character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
