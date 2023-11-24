#include "main.h"

/**
 * set_bit - function that change to 1 the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk = 0;

	if (index > 63)
		return (-1);

	msk = 1 << index;
	*n = *n | msk;
	return (1);
}
