#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a linked list
* @head: a linked list to print
* @n: value to be added
*
* Return: the address of the new element, or NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmpNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}

	tmpNode = *head;
	while (tmpNode->next)
		tmpNode = tmpNode->next;

	tmpNode->next = newNode;

	return (newNode);
}
