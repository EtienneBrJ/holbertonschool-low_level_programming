#include <stdio.h>
/**
 * main - find and print the largest prime numbers of num
 * Return: 0
 */
int main(void)
{
	int count;

	long int num;

	num = 612852475143;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
	}
	printf("%d\n", count - 1);
	return (0);
}
