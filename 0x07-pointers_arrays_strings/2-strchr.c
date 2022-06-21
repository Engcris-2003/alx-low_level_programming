#include "main.h"
/**
 * _strchr - string character
 * @s: string
 * @c: character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = ; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
