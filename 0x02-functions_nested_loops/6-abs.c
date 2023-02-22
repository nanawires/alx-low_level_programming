#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @n: the integer to be commuted
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
