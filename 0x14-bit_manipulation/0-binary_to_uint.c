#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int length, baseTwo;

	if (!b)
		return (0);

	unint = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, baseTwo = 1; length >= 0; length--, baseTwo *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unint += baseTwo;
		}
	}

	return (unint);
}
