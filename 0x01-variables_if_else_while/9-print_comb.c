#include<stdio.h>
/**
 * main - A program that prints combination of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numba = 0;

	while (numba <= 9)
	{
		putchar(numba + '0');
		if (numba == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
