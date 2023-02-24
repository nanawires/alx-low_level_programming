#include <stdio.h>
#include "main.h"

/**
 * print_square - using the # sign print sqare
 * @size: size of _ to be printed
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int len, bred;

	if (size <= 0)
		_putchar('\n');
	for (len = 1; len <= size; len++)
	{
		for (bred = 1; bred <= size; bred++)
			_putchar('#');

		_putchar('\n');
	}
}
