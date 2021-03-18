#include "lists.h"
/**
 * list_len - return the nb of nodes
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
