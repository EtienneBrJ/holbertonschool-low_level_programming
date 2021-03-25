#include "holberton.h"
/**
 * get_bit - return the value of a bit at given index
 * @n: unsigned int to check bit
 * @index: index where we want the value of the bit
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
