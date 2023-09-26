#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - insert new node at the nth node of a linked list.
* @head: a linked list to print
* @idx: the position where new node added.
* @n: value to be added.
*
* Return: the nth node, NULL otherwise.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *tmpNode;

	if (head == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	tmpNode = *head;
	for (i = 0; i < idx - 1; i++)
	{
		tmpNode = tmpNode->next;
		if (tmpNode == NULL)
			return (NULL);
	}

	newNode->next = tmpNode->next;
	tmpNode->next = newNode;

	return (newNode);
}
