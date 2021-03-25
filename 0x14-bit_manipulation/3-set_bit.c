#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set the value
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int ch_val;

	ch_val = n & ~(1 << index);
	return (ch_val);
}
