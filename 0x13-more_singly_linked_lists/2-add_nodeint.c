#include "lists.h"

/**
 * custom_add_nodeint - adds  new node at the beginning of a linked list
 * @first: pointer to the first node in the list
 * @data: data to insert in  new node
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *custom_add_nodeint(listint_t **first, const int data)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = data;
	new_node->next = *first;
	*first = new_node;

	return (new_node);
}

