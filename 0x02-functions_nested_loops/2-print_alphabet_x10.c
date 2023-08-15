#include <stdio.h>

/**
 * print_alphabet_10 times - wirte the the lower-case alphabet on a line ten times.
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
