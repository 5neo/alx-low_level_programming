#include <string.h>
#include "lists.h"

/**
* free_listint - frees the linked list
* @head: a linked list to print
*
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmpNode;

	while (head)
	{
		tmpNode = head;
		head = head->next;
		free(tmpNode);
	}
}
