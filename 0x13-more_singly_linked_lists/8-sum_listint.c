#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data n of a listint_t linked list
 * @head: pointer to the list
 * Return: the sum of all the data of the list or 0 is the list is NULL
 */
int sum_listint(listint_t *head)
{
	int n;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp && head)
	{
		n += tmp->n;
		tmp = tmp->next;
	}
	return (n);
}
