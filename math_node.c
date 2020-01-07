#include "monty.h"

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

/**
 * sub_dnodeint - subtract two elements of a list
 * @stack: input linked list
 *
 * Description: subtracts the two first elements of a doubly linked list
 * Return: void
 */
void sub_dnodeint(stack_t **stack)
{
	int subs = 0;

	subs = (*stack)->next->n - (*stack)->n;
	swap_dnodeint(stack);
	delete_dnodeint_at_index(stack, 0);
	(*stack)->n = subs;
}