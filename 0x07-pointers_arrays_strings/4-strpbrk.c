#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: source string
 * @accept: accepted character
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += b;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');

}
