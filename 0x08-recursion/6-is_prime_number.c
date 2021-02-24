#include "holberton.h"

/**
 * is_prime_number - execute the function that determine weither a number is
 * prime number or not
 * @n: number to determine
 * Return: 0 if n is less or equal to 1, else the function check_prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, n - 1));
}

/**
 * check_prime - determine weither a number is prime number or not
 * @n: number to determine
 * @i: indicator
 * Return: if n is a prime number return 1. And 0 if not.
 */

int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i - 1));
}
