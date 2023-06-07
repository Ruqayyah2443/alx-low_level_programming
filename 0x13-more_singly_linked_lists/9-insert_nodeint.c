#include "lists.h"

/**
 * insert_nodeint_at_index -a function that  inserts a new
 * at a given position
 * @head: address to the first node in the list
 * @idx: index of a  new node
 * @n: data of new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y;
	listint_t *t = *head;

	y = malloc(sizeof(listint_t));
	if (!y || !head)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}

	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			y->next = t->next;
			t->next = y;
			return (y);
		}
		else
			t = t->next;
	}

	return (NULL);
}
