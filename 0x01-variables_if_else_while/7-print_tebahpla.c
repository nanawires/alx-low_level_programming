#include<stdio.h>
/**
 * main - A program that prints lowercase alphabets in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabts;

	for (alphabts = 'z'; alphabts >= 'a'; alphabts--)
	putchar(alphabts);

	putchar('\n');
	return (0);
}
