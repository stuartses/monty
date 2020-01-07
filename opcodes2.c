#include "monty.h"

/**
 * op_mod - Modulus of two elements of a list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Modulus of the two first elements of a list
 * Return: void
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	size_t stack_size;

	stack_size = dlistint_len(*stack);
	if (stack_size < 2)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	mod_dnodeint(stack);
}
