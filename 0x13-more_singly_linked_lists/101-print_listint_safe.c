#include "lists.h"
#include <stdio.h>
#include "lists.h"

/**
 * check_looped_listint - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listint(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tort == har)
			break;
		tort = tort->next;
		har = (har->next)->next;
	}

	if (tort == har)
	{
		tort = head;
		while (tort != har)
		{
			nod++;
			tort = tort->next;
			har = har->next;
		}
		tort = tort->next;
		while (tort != har)
		{
			nod++;
			tort = tort->next;
		}
		return (nod);
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod, ind = 0;

	nod = check_looped_listint(head);

	if (nod == 0)
	{
		while (head != NULL)
		{
			nod++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < nod; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nod);
}
