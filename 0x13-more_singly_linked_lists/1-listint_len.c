#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the list
 * Return: numbers of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
