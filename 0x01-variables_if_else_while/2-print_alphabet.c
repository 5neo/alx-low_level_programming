#include <stdio.h>

/*
 * mai finc print_alphabet
 *
 * returns 0
 */

int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	
	return (0);
}