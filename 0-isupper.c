#include "holberton.h"
/**
 * _isupper - return 1 for uppercase letter and 0 otherwise
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
