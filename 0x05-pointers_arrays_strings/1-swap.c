#include "main.h"
/**
 * swap_int - function that swaps two value
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
