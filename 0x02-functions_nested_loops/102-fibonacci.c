#include <stdio.h>
/**
 * main -ret
 *
 *Return: 0
 */
int main(void)
{
	int long a, b, c;
	int i;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			c = a + b;
			printf("%lu", c);
		}
		else
		{
			c = a + b;
			printf("%lu, ", c);
			a = b;
			b = c;
		}
	}
	printf("\n");
	return (0);
}
