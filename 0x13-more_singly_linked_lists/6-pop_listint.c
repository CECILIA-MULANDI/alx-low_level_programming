#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);
	listint_t *tempPointer;
	
	*tempPointer = *head;
	temPointer = head->next;
	free(head);

	return (*tempPointer);
}
