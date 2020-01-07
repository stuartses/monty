#include "monty.h"
/**
 * swap_dnodeint - swap two elements of a doubly linked list
 * @head: input list
 *
 * Description: swap first two elements of a list
 * Return: void
 */

void swap_dnodeint(stack_t **head)
{
	stack_t *a, *b, *c, *d;

	a = *head;
	b = (*head)->next;
	d = b->next;

	c = a;
	a = b;
	b = c;
	a->next = b;
	a->prev = NULL;
	b->prev = a;
	b->next = d;

	if (d != NULL)
		d->prev = b;

	*head = a;
}
