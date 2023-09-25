#include "lists.h"
#include <stdio.h>

size_t custom_looped_listint_len(const listint_t *head);
size_t custom_print_listint_safe(const listint_t *head);

/**
 * custom_looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t custom_looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t unique_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				unique_nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				unique_nodes++;
				slow = slow->next;
			}

			return (unique_nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * custom_print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t custom_print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = custom_looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

