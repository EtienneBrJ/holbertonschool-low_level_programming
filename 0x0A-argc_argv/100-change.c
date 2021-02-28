#include <stdio.h>
#include <stdlib.h>
int checkcoin(int total, int nb);
/**
 * main - prints the minimum number of coins
 * to make change for an amout of money
 * @argc: numbers of parameters
 * @argv: array of parameters
 * Return: O, or 1 if Error
 **/
int main(int argc, char **argv)
{
	int arg1 = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (arg1 < 0)
	{
		printf("0\n");
		return (0);
	}
	checkcoin(arg1, 0);
	return (0);
}
/**
 * checkcoin - incr nb when substract total
 * @total: value of argv[1] of main
 * @nb: number of coins we need
 * Return: 0
 **/
int checkcoin(int total, int nb)
{
	if (total >= 25)
	{
		return (checkcoin(total - 25, nb + 1));
	}
	if (total >= 10)
	{
		return (checkcoin(total - 10, nb + 1));
	}
	if (total >= 5)
	{
		return (checkcoin(total - 5, nb + 1));
	}
	if (total >= 2)
	{
		return (checkcoin(total - 2, nb + 1));
	}
	if (total >= 1)
	{
		return (checkcoin(total - 1, nb + 1));
	}
	printf("%d\n", nb);
	return (0);
}
