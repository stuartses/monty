#include "monty.h"

/**
 * op_add - Add two elements of a list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Add the first two elements of a list
 * Return: void
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	sum_dnodeint(stack);
}

/**
 * op_nop - Doesn't do Anything
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Doesn't do anything
 * Return: void
 */
void op_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

}
