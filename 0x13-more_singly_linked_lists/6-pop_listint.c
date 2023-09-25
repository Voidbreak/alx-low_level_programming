#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to  first element in  linked list
 *
 * Return: the data inside  elements that was deleted,
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (num);
}

