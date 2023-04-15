#include "main.h"
/**
 * set_bit - set the length value of bit
 * @index: bit index
 * @n: bits keyed in by user
 * Return: new bits
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1UL << index));

	return (1);
}
