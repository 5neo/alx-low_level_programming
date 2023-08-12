#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except e and q
 *
 * return 0 Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
