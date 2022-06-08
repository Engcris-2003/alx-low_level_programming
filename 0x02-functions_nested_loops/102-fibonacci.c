#include <stdio.h>
/**
 * main - main point
 * Description: prints the first 50 Fibonacci number
 * Return: 0
 */
int main(void)
{
	long int i, j, k;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++1)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
