#include <stdio.h>
/**
 * main -ret
 *
 *Return: 0
 */
int main(void)
{
	int long a, b ,c;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%d, ", c);
		c = b;
		b = a + b;
	}
	printf("\n");
	return (0);
}
