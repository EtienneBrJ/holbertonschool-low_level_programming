#include "lists.h"
/**
 * free_dlistint - free a listint_t list
 * @head: first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
