#include<stdio.h>
/**
 * main - A program that prints the alphabet in lower and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numba;
	char alphabts;

	for (numba = '0'; numba <= '9'; numba++)
	putchar(numba);
	for (alphabts = 'a'; alphabts <= 'f'; alphabts++)
	putchar(alphabts);

	putchar('\n');
	return (0);
}
