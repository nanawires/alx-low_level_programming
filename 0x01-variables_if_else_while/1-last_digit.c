#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - A program to output the last digit of a number in variable n
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldgt = (n % 10);
	if (ld > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("the last digit of %d is %d and is 0\n", n, ld);
	else if (ld < 6)
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
