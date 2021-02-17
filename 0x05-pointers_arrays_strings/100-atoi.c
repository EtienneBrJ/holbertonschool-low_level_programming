#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 */
int _atoi(char *s)
{
	int i, sign, result;

	i = result = 0;
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
		}
		else if (s[i] <= '0' && s[i] >= '9')
			break;
		i++;
	}
	result *= sign;
	return (result);
}
