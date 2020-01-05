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