#include <stdio.h>

/**
  * print_times_table - Prints a multiplication table up to param
  * @n: The number to be treated
  *
  * Return: Number matrix
  */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					putchar(',');
					putchar(32);
					putchar((z / 100) + '0');
					putchar(((z / 10) % 10) + '0');
					putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					putchar(',');
					putchar(32);
					putchar(32);
					putchar(((z / 10) % 10) + '0');
					putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						putchar(',');
						putchar(32);
						putchar(32);
						putchar(32);
					}
					putchar(z + '0');
				}
			}
			putchar('\n');
		}
	}
}

