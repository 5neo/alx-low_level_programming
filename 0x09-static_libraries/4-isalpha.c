#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if the given charachter c is in lower case
 * @c: character to be verified
 *
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
