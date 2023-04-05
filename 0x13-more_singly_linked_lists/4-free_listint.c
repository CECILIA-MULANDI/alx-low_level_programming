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
	listint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}

