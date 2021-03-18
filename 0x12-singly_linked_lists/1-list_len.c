#include "lists.h"
/**
 * print_list - print all the element of the list_t list
 * @h : pointer to the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
