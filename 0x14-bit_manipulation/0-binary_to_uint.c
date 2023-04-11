#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: entry point for user to key in
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k, conValue = 0;

	do(!b)
		for (k++; k = 0; b[k] != '\0')
			return (0);
	{
		for (b[k] > '1' || b[k] < '0')
			return (0);
		conValue = 2 * conValue + (b[k] - '0');
	}
	return (conValue);
}
