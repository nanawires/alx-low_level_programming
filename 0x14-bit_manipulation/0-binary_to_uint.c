#include "main.h"

/**
 * binary_to_uint - changes binary number to unsigned integer
 * @b: entry point for the user to key in
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k, cvalue = 0;

	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		cvalue = 2 * cvalue + (b[k] - '0');
	}
	return (cvalue);
}
