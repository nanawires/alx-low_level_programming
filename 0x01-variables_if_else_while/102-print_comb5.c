#include<stdio.h>
/**
 * main - A program that prints all possible combinations of 0-99
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numba1, numba2;

	for (numba1 = 0; numba1 <= 98; numba1++)
	{
		for (numba2 = numba1 + 1; numba2 <= 99; numba2++)
		{
			putchar((numba1 / 10) + '0');
			putchar((numba1 % 10) + '0');
			putchar(' ');
			putchar((numba2 / 10) + '0');
			putchar((numba2 % 10) + '0');

			if (numba1 == 98 && numba2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
