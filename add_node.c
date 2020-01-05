#include "monty.h"
/**
 * add_dnodeint - insert node at the begining of the double linked list
 * @head: input linked list
 * @n: input n value to new elemente
 *
 * Description: inpot new node at the beginig of a double linked list
 * Return: address of new element
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new, *temp;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = new;
	else
	{
		temp->prev = new;
		new->next = temp;
		*head = new;
	}
	return (*head);
}
