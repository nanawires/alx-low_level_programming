#include "main.h"
/**
 * flip_bits - swap ones to zeros
 * @n: acquire bits
 * @m: flip with m
 * Return: bits that flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int unique = n ^ m;
	unsigned long int now;
	int k, counter = 0;

	for (k = 63; k >= 0; k--)
	{
		now = unique >> k;

		if (now & 1)
			counter++;
	}

	return (counter);
}
