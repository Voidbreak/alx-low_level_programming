#include "lists.h"

/**
 * custom_free_listint_safe - Frees a linked list safely.
 * @head: A pointer to the pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t custom_free_listint_safe(listint_t **head)
{
	size_t elements_freed = 0;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		temp = (*head)->next;

		if (*head - (*head)->next > 0)
		{
			free(*head);
			*head = temp;
			elements_freed++;
		}
		else
		{
			free(*head);
			*head = NULL;
			elements_freed++;
			break;
		}
	}

	*head = NULL;

	return (elements_freed);
}

