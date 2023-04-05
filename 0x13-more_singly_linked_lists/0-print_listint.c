#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements contained in listint_t list
 * @h: a pointer to the head of listint_t list
 *
 * Return: the number of nodes contained in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
