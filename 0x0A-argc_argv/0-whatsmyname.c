#include <stdio.h>

/**
* main - prints the name program
* @argc: contains the numbers of arguments
* @argv: array stocking parameters
* Return: 0
**/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[argc]);
	return (0);
}
