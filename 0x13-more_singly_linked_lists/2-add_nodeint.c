#include "lists.h"
/**
 * add_nodeint - a fun that return head after adding a node
 * @n:argument (data)
 * @head:argument pointer to head
 * Returns:head
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	else
	{
		if (head == NULL)
			*head = newnode;
		else
		{
			newnode->n = n;
			newnode->next = *head;
			*head = newnode;
		}
		return (*head);
	}
}
