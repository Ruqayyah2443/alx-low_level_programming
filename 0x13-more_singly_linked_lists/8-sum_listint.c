#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data(n)
 * in a listint_t link list
 * @head: first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *t = head;

	while (t)
	{
		add += t->n;
		t = t->next;
	}

	return (add);
}
