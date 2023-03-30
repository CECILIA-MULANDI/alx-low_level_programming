#include "lists.h"
/**
 *list_len - returns element count
 *@h:pointer to the head
 *Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
