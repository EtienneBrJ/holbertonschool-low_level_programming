#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
