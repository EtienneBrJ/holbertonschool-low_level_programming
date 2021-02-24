#include "holberton.h"
/**
 * _sqrt_recursion - returns the result of _guess_sqrt
 * @n: number to check
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_guess_sqrt(n, 0));
}

/**
 * _guess_sqrt - returns the square root of a number
 * @n: number to check
 * @guess: number testing for square root of n
 * Return: square root of n
 */

int _guess_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_guess_sqrt(n, guess + 1));
}
