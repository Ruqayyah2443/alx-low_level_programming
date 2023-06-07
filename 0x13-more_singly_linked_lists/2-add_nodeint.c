#include "lists.h"

/**
 * add_nodeint - a function adds a new node at the beginning
 * of a listint_t list
 * @head: head of pointer to the first node in the list
 * @n: num to insert in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);

	c->n = n;
	c->next = *head;
	*head = c;

	return (c);
}
