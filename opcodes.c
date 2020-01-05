#include "monty.h"
/**
 * op_pall - Prints list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Print the data of all linked list
 * Return: void
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	print_dlistint(*stack);
}

/**
 * op_push - Push data in the list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Push from file data to linked list
 * Return: void
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	int n_value;
	(void)line_number;

	n_value = atoi(global_n);

	add_dnodeint(*(&stack), n_value);
}

/**
 * op_pint - Prints first in list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Print the data of first element of a doubly linked list
 * Return: void
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	first_dlistint(*stack);
}

/**
 * op_pop - Quit first element of a list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Quit first element of a doubly linked list
 * Return: void
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	delete_dnodeint_at_index(stack, 0);
}
