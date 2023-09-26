#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - remove the nth node of a linked list.
* @head: a linked list to print
* @index: index of the node that should be deleted. Index starts at 0.
*
* Return: the nth node, NULL otherwise.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
		return (1);
	}

	currNode = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (currNode->next == NULL)
			return (-1);
		currNode = currNode->next;
	}

	nextNode = currNode->next;
	currNode->next = nextNode->next;
	free(nextNode);

	return (1);
}
