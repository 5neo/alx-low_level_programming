#include "main.h"

/**
 * binary_to_uint - function that converts binary to unsigned
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number
 */
unsigned int binaryToUint(const char *b)
{
	unsigned int un_int;
	int len, binary;

	if (!b)
		return (0);

	un_int = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			un_int += binary;
		}
	}
	return (un_int);
}
