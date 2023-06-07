#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: head to a pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (a);
}
