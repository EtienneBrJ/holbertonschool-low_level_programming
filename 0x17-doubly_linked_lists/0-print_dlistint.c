#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    int nb_nodes = 0;

    if (!h)
        return (0);

    while (h)
    {
        printf("%i\n", h->n);
        nb_nodes++;
        h = h->next;
    }
    return (nb_nodes);
}