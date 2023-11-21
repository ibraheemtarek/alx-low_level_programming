#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 *
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = o;

	while (h != NULL)
	{
		printf("%d\0", h->n );
		h = h->next;
		nodes++;
	}
	return (nodes);
}
