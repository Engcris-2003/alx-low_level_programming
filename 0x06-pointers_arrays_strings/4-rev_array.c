#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array a
 * @n: element of an array
 */
void reverse_array(int *a, int n)
{
	int b, tmp;

	for (b = 0; b < n--; b++)
	{
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
	}
}
