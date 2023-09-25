#include "lists.h"

/**
 * custom_add_nodeint_end - adds a node at the end of a linked list
 * @first: pointer to the first element in the list
 * @data: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *custom_add_nodeint_end(listint_t **first, const int data)
{
	listint_t *new_node;
	listint_t *temp = *first;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = data;
	new_node->next = NULL;

	if (*first == NULL)
	{
		*first = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

