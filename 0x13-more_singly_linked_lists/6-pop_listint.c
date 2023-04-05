#include "lists.h"
/**
 *pop_listint- function to delete
 *@head:pointer to pointer
 *Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *tempPointer;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	tempPointer = (*head)->next;
	free(*head);
	(*head) = tempPointer;

	return (data);
}
