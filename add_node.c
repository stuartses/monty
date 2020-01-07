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
	{
		dprintf(2, "Error: malloc failed\n");
		free(mtdata.line_buf);
		fclose(mtdata.fp);
		exit(EXIT_FAILURE);
	}

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

/**
 * sum_dnodeint - sum two elements of a list
 * @stack: input linked list
 *
 * Description: sum the two first elements of a doubly linked list
 * Return: void
 */
void sum_dnodeint(stack_t **stack)
{
	int sum = 0;

	sum = (*stack)->n + (*stack)->next->n;
	swap_dnodeint(stack);
	delete_dnodeint_at_index(stack, 0);
	(*stack)->n = sum;
}
