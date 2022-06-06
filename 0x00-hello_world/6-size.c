#include <stdio.h>
/**
 * main - main block
 * Description: prints size of various data types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	fprintf(stderr, "size of a char: %zu byte(s)\n", sizeof(a));
	fprintf(stderr, "size of an int: %zu byte(s)\n", sizeof(b));
	fprintf(stderr, "size of a long int: %zu byte(s)\n", sizeof(c));
	fprintf(stderr, "size of a long long int: %zu byte(s)\n", sizeof(d));
	fprintf(stderr, "size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
