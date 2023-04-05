#include "lists.h"
/**
 * print_listint - function that prints the element and no of elements
 * @h: argument pointer
 * Return: the count
 */

size_t print_listint(const listint_t *h)
{
	size_t elCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elCount++;
		h = h->next;
	}
	return (elCount);
}
