#include <stdio.h>

/**
 * main - Prints all single digits of base 10,
 *        only use putchar without char variables.
 *
 * Return: Always 0.
 */

int main (void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');

	return (0);
}
