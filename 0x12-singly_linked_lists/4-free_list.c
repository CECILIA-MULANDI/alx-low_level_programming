#include "lists.h"
/**
 * free_list- function to freee space
 * @head: the pointer to first node
 * Returns:void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}



}
