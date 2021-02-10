#include <stdio.h>
/**
 * main -ret
 *
 *Return: 0
 */
int main(void)
{
	int long a, b ,c;
	int i;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
