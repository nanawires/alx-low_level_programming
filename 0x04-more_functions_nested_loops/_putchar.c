#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Retur 1 if true, 0 if false
 * on error, -1 return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
