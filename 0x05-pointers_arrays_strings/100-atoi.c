#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: Int
 */
int _atoi(char *s)
{
	int i, sign, result;
	int stop_conv;

	i = 0;
	result = 0;
	stop_conv = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			stop_conv = 1;
		}
		else if (stop_conv == 1)
			break;
		i++;
	}
	result *= sign;
	return (result);
}
