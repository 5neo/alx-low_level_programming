#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all linked list elements
 * @h: is a linked list
 *
 * return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->value);
		++counter;
		h = h->next;
	}

return (count);
}
