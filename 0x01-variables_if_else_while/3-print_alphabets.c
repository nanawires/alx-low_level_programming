#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabts;

	for (alphabts = 'a'; alphabts <= 'z'; alphabts++)
	for (alphabts = 'A'; alphabts <= 'Z'; alphabts++)
		putchar(alphabts);

	putchar('\n');
	return (0);
}
