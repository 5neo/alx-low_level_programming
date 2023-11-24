#include "main.h"

/**
 * clear_bit - function that change to 0 the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk = 0;

	if (index > 63)
		return (-1);

	msk = 1 << index;
	msk = ~msk;
	*n = *n & msk;
	return (1);
}
