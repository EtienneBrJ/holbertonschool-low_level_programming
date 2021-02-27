#include <stdio.h>
int _atoi(char *s);
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

/**
 * main - adds numbers
 * @argc: numbers of paramters
 * @argv: array of parameters
 * Return: 0, or 1 if Error
 **/

int main(int argc, char **argv)
{
	int result = 0;
	int i = 1;

	if (argc < 1)
		return (0);
	while (i < argc)
	{
		if (!_atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += _atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
