#include "lists.h"

/**
 * sum_listint - Computes the sum of all the integers in a listint_t list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all integers.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}

	return (total_sum);
}

