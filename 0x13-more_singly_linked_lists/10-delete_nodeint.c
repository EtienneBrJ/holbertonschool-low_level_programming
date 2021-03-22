#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to pointer
 * @index: index of the list
 * Return: 1 if it's succeeded and -1 if it's failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *replace;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	replace = tmp->next;
	tmp->next = replace->next;

	return (1);
}
