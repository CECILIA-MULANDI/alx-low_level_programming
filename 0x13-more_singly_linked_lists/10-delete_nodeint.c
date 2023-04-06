#include "lists.h"
/**
 *delete_nodeint_at_index - function to delete
 *@head:argument pointer
 *@index:argument pointer
 *Return:int type
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode = NULL;

	listint_t *tempNode = *head;	

	unsigned int count = 0;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tempNode);
		return (1);
	}

	while (count < index - 1)
	{
		if (!tempNode || (!tempNode->next))
			return (-1);
		tempNode = tempNode->next;
		count++;
	}
	prevNode = tempNode->next;
	tempNode->next = prevNode->next;
	free(prevNode);


	return (1);

}


