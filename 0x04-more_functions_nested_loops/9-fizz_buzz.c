#include <stdio.h>
/**
 * main - Print the numbers form 1 to 100
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0 && !(i == 100))
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i != 100)
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
