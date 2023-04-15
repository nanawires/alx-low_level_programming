#include "main.h"

/**
 * binary_to_uint - changes binary number to unsigned integer
 * @b: entry point for the user to key in
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, cvalue = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		cvalue = 2 * cvalue + (b[i] - '0');
	}
	return (cvalue);
}
