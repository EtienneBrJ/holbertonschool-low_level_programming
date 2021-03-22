#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the list
 * @head: pointer to a pointer
 * @n: data of the list
 * Return: address of the new element of NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnew;
	listint_t *tmp = *head;

	endnew = malloc(sizeof(listint_t));
	if (endnew == NULL)
		return (NULL);

	endnew->n = n;
	endnew->next = NULL;

	if (!*head)
	{
		*head = endnew;
		return (endnew);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = endnew;

	return (endnew);
}
