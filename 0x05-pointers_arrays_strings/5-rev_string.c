#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: character
 */
void rev_string(char *s)
{
	char n;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
		n = s[i];
		s[i] = s[len2];
		s[len2] = n;
		len2 -= 1;
	}
}
