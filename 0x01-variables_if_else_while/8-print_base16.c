#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	char lett;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);

	putchar('\n');

	return (0);
}
