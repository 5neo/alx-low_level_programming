#ifndef FILE_LISTS_
#define FILE_LISTS_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - node of linked list
 * @value: is integer
 * @next: pointer to the next node
 */

typedef struct listint_s
{
	int value;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
