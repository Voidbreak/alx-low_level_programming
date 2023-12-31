#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specified position in a linked list.
 * @head: A pointer to the pointer to the first node in the list.
 * @idx: The index where the new node should be inserted.
 * @n: The data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	free(new_node); 
	return (NULL);
}

