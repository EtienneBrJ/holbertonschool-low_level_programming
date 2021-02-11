#include "holberton.h"
/**
 * _isdigit - Checks for a digit
 * @c: Digit to check
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
