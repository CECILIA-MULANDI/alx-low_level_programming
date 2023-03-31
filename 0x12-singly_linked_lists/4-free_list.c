#include "lists.h"
/**
 * free_list- function to freee space
 * @head: the pointer to first node
 * Returns:void
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
