#include "holberton.h"
/**
 * _isupper - Checks for uppercase
 * @c: Uppercase
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}