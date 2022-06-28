#include <stdio.h>
/**
 * main - main point
 * Description: adds positive numbers
 * @argv: array
 * @argc: integer
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int result, num, i, j, k;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[K]);
		result += num;
	}
	printf("%d\n", result);
	return (0);

}
