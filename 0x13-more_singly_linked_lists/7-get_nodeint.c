#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the list
 * @index: index of the node
 * Return: the address of the node of 0 if it's NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (!tmp)
		return (NULL);

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
