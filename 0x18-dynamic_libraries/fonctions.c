#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: Character to print
 * Return: 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Check for alphabetic character
 * @c: Print alphabetic character
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - Computes the absolute value of an integer
 * @n: Integer
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	} else
		return (n);
}

/**
 * _isupper - Checks for uppercase
 * @c: Uppercase
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isdigit - Checks for a digit
 * @c: Digit to check
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _strlen - return the length of a string
 * @s: Char
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _puts - Print a sting, followed by a new line
 * @str: Chars to output
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: pointer to the buffer in which the function copy the string
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (l = 0; l <= i; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: Int
 */
int _atoi(char *s)
{
	int i, sign, result;
	int stop_conv;

	i = 0;
	result = 0;
	stop_conv = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			stop_conv = 1;
		}
		else if (stop_conv == 1)
			break;
		i++;
	}
	result *= sign;
	return (result);
}

/**
 * _strcat - concatenates two strings
 * @src: add this chain of characters to the string dest, overwriting the
 * terminating null byte (\0) at the end of the dest
 * @dest : result string
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int lenght = 0;
	int i;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; src[i] != '\0'; i++, lenght++)
	{
		dest[lenght] = src[i];
	}
	dest[lenght] = '\0';
	return (dest);
}

/**
 * _strncat - concatenates two strings
 * @src: add this chain of characters to the string dest, overwriting the
 * terminating null byte (\0) at the end of the dest
 * @dest: result string
 * @n: bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenght = 0;
	int i;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++, lenght++)
	{
		dest[lenght] = src[i];
	}
	dest[lenght] = '\0';
	return (dest);
}
/**
 * _strncpy - copies a string
 * @dest: string that will receive the copy
 * @src: string to be copied
 * @n: bytes of string src
 * Return: @dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: -0 if s1 < s2, 0 if they're equal,
 * +0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: filling char
 * @n: size of the filling
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _memcpy - copes memory area
 * @dest: copie destination
 * @src: memory area to copie
 * @n: bytes
 * Return: dest copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strchr - locate a char in a string
 * @s: string to check
 * @c: char to locate
 * Return: first occurence of the char c in the string s,
 * or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++) /* >= ?? */
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}

/**
 * _strspn - get the length of a prefix substring
 * @s: string to compare
 * @accept: bytes to compare
 * Return: number of bytes in the initial s, wich consist only of bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, for_ret;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for_ret = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				for_ret = 1;
			}
		}
		if (for_ret == 0)
		{
			return (n);
		}
	}
	return (0);
}
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to find occurence
 * @accept: string where is occurence to find is s
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: where is the first occurence
 * Return: a pointer to the beggining of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	int i = 0;

	if (needle[0] == '\0')
	{
		return (&haystack[i]);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/**
 * add - Add two integers and returns the result
 * @a: Int to add to b
 * @b: Int to add to a
 * Return: Result of a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * add - Add two integers and returns the result
 * @a: Int to add to b
 * @b: Int to add to a
 * Return: Result of a + b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * add - Add two integers and returns the result
 * @a: Int to add to b
 * @b: Int to add to a
 * Return: Result of a + b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * add - Add two integers and returns the result
 * @a: Int to add to b
 * @b: Int to add to a
 * Return: Result of a + b
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * add - Add two integers and returns the result
 * @a: Int to add to b
 * @b: Int to add to a
 * Return: Result of a + b
 */
int mod(int a, int b)
{
	return (a % b);
}














