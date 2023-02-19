#include<stdio.h>
/**
 * main - A program that prints different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numba1, numba2;

	for (numba1 = 0; numba1 < 9; numba1++)
	{
		for (numba2 = numba1 + 1; numba2 < 10; numba2++)
		{
			putchar((numba1 % 10) + '0');
			putchar((numba2 % 10) + '0');

			if (numba1 == 8 && numba2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
