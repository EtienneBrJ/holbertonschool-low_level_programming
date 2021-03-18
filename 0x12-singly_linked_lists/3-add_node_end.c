#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to pointer to the list
 * @str: string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int lenght = 0;
	list_t	*tmp = *head;

	while (str[lenght])
		lenght++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);


	newnode->str = strdup(str);
	newnode->len = lenght;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnode;
	return (newnode);
}
