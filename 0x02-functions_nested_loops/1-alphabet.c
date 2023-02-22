#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints lowercase alphabets followed by new line
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}
