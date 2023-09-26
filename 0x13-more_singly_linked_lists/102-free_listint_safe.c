#include "lists.h"

/**
 * check_looped_listfree - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listfree(listint_t *head)
{
	listint_t *tort, *har;
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
 * free_listint_safe - Frees a listint_t list safely
 *            (i.e. can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nod, ind;

	nod = check_looped_listfree(*h);
	if (nod == 0)
	{
		while (h != NULL && *h != NULL)
		{
			nod++;
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (ind = 0; ind < nod; ind++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nod);
}
