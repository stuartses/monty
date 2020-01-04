#include "monty.h"
/*
 *
 *
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	print_dlistint(*stack);
}

/**
 *
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	add_dnodeint(*(&stack), global_n);
}
