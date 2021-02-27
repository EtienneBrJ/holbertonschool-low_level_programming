#include <stdio.h>
int _atoi(char *s);
/**
 * main - multiplies two numbers
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: the result of 1 if Error
 **/

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}

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
