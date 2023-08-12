#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');

	return (0);
}
