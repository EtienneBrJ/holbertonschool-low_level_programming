#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - functions that create a new dog
 * @name: name of the new dod
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_l;
	int owner_l;

	owner_l = _strlen(owner);
	name_l = _strlen(name);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (owner_l + 1));
	if (!dog->owner)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (name_l + 1));
	if (!dog->name)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}
	_strcpy(dog->owner, owner);
	_strcpy(dog->name, name);
	dog->age = age;

	return (dog);
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
