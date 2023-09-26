#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - function that returns the number of elements
* @h: a linked list to print
*
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}

return (count);
}
