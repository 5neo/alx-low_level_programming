#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmpNode;
	unsigned int cnt = 0;

	if (str == NULL)
		return (NULL);

	while (str[cnt++])
		;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = --cnt;
	newNode->next = NULL;
	
	if (*head == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}

	tmpNode = *head;
	while (tmpNode->next)
		tmpNode = tmpNode->next;

	tmpNode->next = newNode;	/* Point head to new node */

	return (newNode);
}
