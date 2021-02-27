#include <stdio.h>
/**
 * main - prints the numbers of arguments passed into it
 * @argc: contains the numbers of arguments
 * @argv: array stocking parameters
 * Return: 0
 **/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
