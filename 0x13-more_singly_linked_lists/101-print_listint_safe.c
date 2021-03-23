#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the list
 * Return: the nb of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nb = 0;

	while (head)
	{
		nb++;
		printf("[%p] %d\n", (void *)head->next, head->n);
		if (head->next)
			head = head->next;
		else
			exit(98);
	}
	return (nb);
}
