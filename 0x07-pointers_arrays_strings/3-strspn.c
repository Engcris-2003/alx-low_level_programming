#include "main.h"
/**
 * _strspn - get length of prefix substring
 * @s: source string
 * @accept: accept string
 * Return: a string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
