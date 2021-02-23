#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: pointer to 2D array
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int taille = size * size;
	int somme1 = 0;
	int somme2 = 0;

	for (i = 0; i < taille; i++)
	{
		if (i == 0 || i % (size + 1) == 0)
			somme1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i != taille - 1)
			somme2 += a[i];
	}
	printf("%d, %d\n", somme1, somme2);
}
