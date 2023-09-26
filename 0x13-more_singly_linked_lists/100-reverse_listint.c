#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currListHead = NULL;
	listint_t *revListHead = NULL;

	while (*head)
	{
		currListHead = (*head)->next;
		(*head)->next = revListHead;
		revListHead = *head;
		*head = currListHead;
	}

	*head = revListHead;

	return (*head);
}
