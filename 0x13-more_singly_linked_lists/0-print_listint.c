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
	size_t nodes = 0;

	if h = h->next;
	nodes++;
	printf("%d\n", h->n);

	return (nodes);
}
