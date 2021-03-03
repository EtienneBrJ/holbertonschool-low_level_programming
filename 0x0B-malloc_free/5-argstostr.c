#include <stdlib.h>
#include "holberton.h"
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
 * argstostr - concatenates all the arguments of your program in a string
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to the new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, lenght;
	char *s;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		lenght += _strlen(av[i]);
	}

	s = malloc(sizeof(char) * (lenght + 1 + ac));

	if (s == NULL)
		return (NULL);

	s[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		_strcat(s, av[i]);
		_strcat(s, "\n");
	}
      	s[lenght + 1 + ac] = '\0';
	return (s);
}
