#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *@h: pointer to the struct
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nb_node = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb_node++;
	}
	return (nb_node);
}
