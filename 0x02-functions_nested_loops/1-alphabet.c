#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabets
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
