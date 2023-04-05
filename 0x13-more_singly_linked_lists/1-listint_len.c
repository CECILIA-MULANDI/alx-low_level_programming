#include "lists.h"
/**
 * listint_len - returns the count of elements
 * @h: the argument pointer
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t elCount = 0;

	while (h != NULL)
	{
		elCount++;
		h = h->next;
	}
	return (elCount);
}

