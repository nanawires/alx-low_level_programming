#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints 10 times the alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);

		_putchar('\n');
	}
}

