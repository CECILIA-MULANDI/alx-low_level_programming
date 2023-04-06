#include "lists.h"
/**
 *sum_listint- function to calculate sum
*@head: argument to pointer
 *Return: sum
 *
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *tempPnt;
	int sum = 0;

	tempPnt = head;
	if (head == NULL)
		return (0);
	while (tempPnt != NULL)
	{
		sum += tempPnt->n;
		tempPnt = tempPnt->next;
	}
	return (sum);
}


