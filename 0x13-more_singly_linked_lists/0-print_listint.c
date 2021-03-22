#include "lists.h"
/**
 * print_listint - print all the elements of a listint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nb++;
		h = h->next;
	}
	return (nb);
}
