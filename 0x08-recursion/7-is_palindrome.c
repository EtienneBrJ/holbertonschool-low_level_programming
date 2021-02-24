#include "holberton.h"

/**
 * is_palindrome - execute the function check
 * @s: string to check in function check
 * Return: function check with new parameter 0 (index)
 */

int is_palindrome(char *s)
{
	return (check(s, 0));
}

/**
 * check - check if the string is a palindrome
 * @s: string to check
 * @i: index
 * Return: 1 if the string is a palindrome and 0 if not.
 */

int check(char *s, int i)
{
	int len = _strlen(s) - 1;

	if (s[i] == s[len])
		return (1);
	else
		return (0);
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
