#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to the pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}

	*head = previous;

	return (*head);
}

