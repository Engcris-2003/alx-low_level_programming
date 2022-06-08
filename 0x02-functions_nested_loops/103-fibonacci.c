#include <stdio.h>
/**
 * main - main point
 * Description: prints the sum of the even-valued
 * Return: 0
 */
int main(void)
{
	int j;
	unsigned long int i, k, next, sum;

	i = 1;
	k = 2;
	sum = 0;

	for (j = 1; j <= 33; ++j)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			sum = sum + i;
		}
		next = i + k;
		i = k;
		k = next;
	}
	printf("%lu\n", sum);

	return (0);
}
