#include<stdio.h>
/**
 * main - A program that prints the alphabet in lower and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabts = 'a';

	while (alphabts <= 'z')
	{
		if (alphabts != 'e' && alphabts != 'q')
		{
			putchar(alphabts);
		}
		alphabts++;
	}
	putchar('\n');
	return (0);
}
