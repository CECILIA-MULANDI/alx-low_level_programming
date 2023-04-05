#include "lists.h"
/**
 *free_listint2 - free the whole linked list
 *@head:pointer argument
 *Return:void
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *freeNode;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		freeNode = (*head)->next;
		free(*head);
		*head = freeNode;
	}
	*head = NULL;
}

