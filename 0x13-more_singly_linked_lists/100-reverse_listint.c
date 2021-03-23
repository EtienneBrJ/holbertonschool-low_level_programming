#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = 0;
	listint_t *nextnode = *head;

	while (nextnode)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
