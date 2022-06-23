#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - function that gives natural square of number
 * @n: integer
 * Return: returns a natural square of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - square of a number
 * @n: integer
 * @i: integer
 * Return: number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (1);
	return (_sqrt(n, i + 1));
}
