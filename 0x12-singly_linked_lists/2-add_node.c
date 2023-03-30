#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

    /* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

    /* Duplicate the string and store it in the new node */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

    /* Update the pointers of the new node */
	new_node->len = strlen(str);
	new_node->next = *head;

    /* Update the head pointer */

	*head = new_node;

    /* Return a pointer to the new node */
	return (new_node);
}

