#include "main.h"
/**
 * flip_bits - returns number of bit that you would need to flip
 * @n: the number
 * @m: the number to flip n to
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bits = 0;

	while (i > 0)
	{
		bits += (i & 1);
		i >>= 1;
	}

	return (bits);
}

