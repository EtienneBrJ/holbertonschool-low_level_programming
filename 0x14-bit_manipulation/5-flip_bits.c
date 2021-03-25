#include "holberton.h"
/**
 * flip_bits -  returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first nb
 * @m: second nb
 * Return: the number of bits you would need to flip to get from
 * one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
/**
 * countSetBits - count set bits
 * @n: n
 * Return: count
 */
int countSetBits(int n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
