#include "main.h"
/**
 * print_binary - displays the binary rep of a number
 * @n: binary number yet to be displayed
 */
void print_binary(unsigned long int n)
{
	unsigned long int label;
	int k, m = 0;

	for (k = 63; k >= 0; k--)
	{
		label = n >> k;

		if (label & 1)
		{
			putchar('1');
			m++;
		}
		else if (m)
			putchar('0');
	}
	if (!m)
		putchar('0');
}
