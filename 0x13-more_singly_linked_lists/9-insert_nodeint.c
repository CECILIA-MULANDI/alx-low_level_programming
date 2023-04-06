#include "lists.h"

/**
 *insert_nodeint_at_index - function to insert
 *@head: pointer to head
 *@idx: where to put node
 *@n:data to insert
 *Return: address of newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempNode = *head;
	listint_t *newNode;
	unsigned int count = 0;


	newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (tempNode != NULL && count < idx)
	{
		if (count == idx - 1)
		{
			newNode->next = tempNode->next;
			tempNode->next = newNode;
			return (newNode);
		}
		else
		{
			tempNode = tempNode->next;
		}
		count++;
	}
	return (NULL);
}
