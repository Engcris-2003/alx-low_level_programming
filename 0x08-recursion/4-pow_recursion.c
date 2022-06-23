#include "main.h"
/**
 * _pow_recursion - function returning x pow y
 * @x: integer
 * @y: integer
 * Return: returns x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
