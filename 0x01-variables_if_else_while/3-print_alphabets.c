#include<stdio.h>
/**
 * main - A program that prints the alphabet in lower and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabts;

	for (alphabts = 'a'; alphabts <= 'z'; alphabts++)
	putchar(alphabts);
	for (alphabts = 'A'; alphabts <= 'Z'; alphabts++)
	putchar(alphabts);

	putchar('\n');
	return (0);
}
