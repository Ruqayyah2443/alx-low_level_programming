#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list
 * @head: head to a pointer to the first element in the list
 * @n: int to add in the new element
 *
 * Return: the address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *t = *head;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);

	c->n = n;
	c->next = NULL;

	if (*head == NULL)
	{
		*head = c;
		return (c);
	}

	while (t->next)
		t = t->next;

	t->next = c;

	return (c);
}
