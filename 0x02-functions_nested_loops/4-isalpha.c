#include "main.h"
/**
 * _isalpha - function that checks for alphabet character
 *@c: character to check
 * Return: returns 0 or 1 depending to the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
