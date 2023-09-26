#include <string.h>
#include "lists.h"

/**
* free_list - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/

void free_list(list_t *head)
{
	list_t *tmpNode;

	while (head)
	{
		tmpNode = head;
		head = head->next;
		free(tmpNode->str);
		free(tmpNode);
	}
}
