#include "holberton.h"

/**
 * is_palindrome - execute the function check
 * @s: string to check in function check
 * Return: function check with new parameter 0 (index)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, 0, (_strlen(s) - 1)));
}

/**
 * check - check if the string is a palindrome
 * @s: string to check
 * @min: index
 * @max: index max
 * Return: 1 if the string is a palindrome and 0 if not.
 */

int check(char *s, int min, int max)
{
	if (s[min] != s[max])
		return (0);

	if (min >= max)
		return (1);
	else
		return (check(s, min + 1, max - 1));
}

/**
 * _strlen - return the length of a string
 * @s: Char
 * Return: the lenght of the string : i
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
