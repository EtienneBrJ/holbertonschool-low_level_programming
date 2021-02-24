#include "holberton.h"
/**
 * _sqrt_recursion - returns the result of _guess_sqrt
 * @n: number to check
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (_guess_sqrt(n, 1, n));
}

/**
 * _guess_sqrt - returns the square root of a number
 * @n: number to check
 * @min: min delimitation for check
 * @max: max delimitation for check
 * Return: square root of n
 */

int _guess_sqrt(int n, int min, int max)
{
	int guess = (min + max) / 2;
	int guess_squared = guess * guess;

	if (max < min)
	{
		return (-1);
	}
	if (guess_squared == n)
	{
		return (guess);
	}
	else if (guess_squared < n)
	{
		return (_guess_sqrt(n, guess + 1, max));
	}
	else
		return (_guess_sqrt(n, min, guess - 1));
}
