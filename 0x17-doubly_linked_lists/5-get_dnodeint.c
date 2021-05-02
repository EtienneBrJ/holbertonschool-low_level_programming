#include "lists.h"
/**
 * get_dnodeint_at_index - returns a specific node of a listint_t linked list
 * @head: first node
 * @index: node to return
 * Return: pointer to the specific node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head; i++)
		head = head->next;

	return (head);
}
