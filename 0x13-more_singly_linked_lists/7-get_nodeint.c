#include "lists.h"
/**
 *get_nodeint_at_index - function to return nth node
 *@head: pointer argument
 *@index: position ofnode seached
 *Return: the node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  count = 0;

	listint_t *tempNode;

	tempNode = head;

	while (tempNode != NULL && count < index)
	{
		tempNode = tempNode->next;
		count++;
	}
	if (tempNode == NULL)
		return (NULL);
	else
		return (tempNode);
}
