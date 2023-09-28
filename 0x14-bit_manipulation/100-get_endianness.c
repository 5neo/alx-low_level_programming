#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int unint;
	char *cha;

	unint = 1;
	cha = (char *) &unint;

	return ((int)*cha);
}
