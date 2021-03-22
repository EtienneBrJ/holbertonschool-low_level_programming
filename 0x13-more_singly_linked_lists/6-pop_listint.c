#include "lists.h"
/**
 * pop_listint - delete the head node of a list and returns
 * the head node's data
 * @head: double pointer
 * Return: the head node's data, if linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	tmp = (*head)->next;

	free(*head);

	*head = tmp;

	return (n);
}
