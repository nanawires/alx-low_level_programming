#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *l = (char *) &k;

	return (*l);
}
