#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specified index in a linked list.
 * @head: A pointer to the pointer to the first node in the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (i < index)
	{
		if (current_node == NULL)
			return (-1);

		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (previous_node != NULL)
		previous_node->next = current_node->next;
	else
		*head = current_node->next;

	free(current_node);
	return (1);
}

