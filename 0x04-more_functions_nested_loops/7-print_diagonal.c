#include <stdio.h>

/**
  * print_square - Prints n squares according n number of times
  * @n: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int n)
{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				putchar(35);
			}

			putchar('\n');
		}
	}
}
