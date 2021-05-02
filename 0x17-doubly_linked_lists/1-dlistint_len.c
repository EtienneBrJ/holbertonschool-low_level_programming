#include "lists.h"
/**
 *dlistint_len - return the number of nodes
 *@h: pointer to struct
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nb_node = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		nb_node++;
	}
	return (nb_node);
}
