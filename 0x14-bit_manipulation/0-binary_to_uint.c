#include "holberton.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: binary number
 * Return: the converted number or 0 b is NULL
 * or if a character in the string b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converter = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		if (b[i] == '0')
			converter = converter * 2 + 0;
		else if (b[i] == '1')
			converter = converter * 2 + 1;
		else
			return (0);
	return (converter);
}
