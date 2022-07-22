#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 *Return: unsigned int with decimal value of binary number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int ui;
	unsigned int bi;

	bi = 0;
	if (!b)
		return (0);
	for (ui = 0; b[ui] != '\0'; ui++)
	{
		if (b[ui] != '0' && b[ui] != '1')
			return (0);
	}
	for (ui = 0; b[ui] != '\0'; ui++)
	{
		bi <<= 1;
		if (b[ui] == '1')
			bi += 1;
	}
	return (bi);
}
