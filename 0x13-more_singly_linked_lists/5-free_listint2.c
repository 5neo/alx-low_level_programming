#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: a linked list to print
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmpNode;

	if (head == NULL)
		return;

	while (*head)
	{
		tmpNode = (*head)->next;
		free(*head);
		(*head) = tmpNode;
	}
}
