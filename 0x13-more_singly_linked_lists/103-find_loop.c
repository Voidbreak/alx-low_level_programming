#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: Pointer to the node where the loop starts, or NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_runner = head;
	listint_t *fast_runner = head;

	if (!head)
		return (NULL);

	while (slow_runner && fast_runner && fast_runner->next)
	{
		fast_runner = fast_runner->next->next;
		slow_runner = slow_runner->next;
		if (fast_runner == slow_runner)
		{
			slow_runner = head;
			while (slow_runner != fast_runner)
			{
				slow_runner = slow_runner->next;
				fast_runner = fast_runner->next;
			}
			return (fast_runner);
		}
	}

	return (NULL);
}

