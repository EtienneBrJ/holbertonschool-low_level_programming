#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer
 * @int: Integer
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	} else
		return (n);
}
