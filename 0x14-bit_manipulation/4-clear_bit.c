#include "main.h"
/**
 * clear_bit - at index, set bits to zero
 * @n: acquire bits
 * @index: set bit to zero
 * Return: bits that remains
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
