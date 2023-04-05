#include "lists.h"
/**
 *free_listint - function to free up mem
 *@head: pointer to node
 *Return: void
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *prevNode;

	if (head != NULL)
	{
		prevNode = head;
		head = head->next;
		free(prevNode);
	}
}

