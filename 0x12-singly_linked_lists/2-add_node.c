#include "lists.h"
/**
 * add_node - addsa new node at the beginning of a list
 * @head: ?
 * @str: string to add in the new node
 * Return: address of the new node or NULL is NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int lenght = 0;

	while (str[lenght] != '\0')
		lenght++;
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = lenght;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
