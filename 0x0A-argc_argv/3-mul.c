#include <stdio.h>
/**
 * main - main point
 * Description: multiplies two numbers
 * @argv: array
 * @argc: integer
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
