#include "main.h"

/**
 * get_bit - acquires the bits
 * @n: bits keyed in by user
 * @index: bit index
 * Return: value of bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bvalue;

	if (index > 63)
		return (-1);
	bvalue = (n >> index) & 1;
	return (bvalue);
}
