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
	size_t stack_size;

	stack_size = dlistint_len(*stack);
	if (stack_size < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

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

/**
 * op_sub - Subtraction of two elements of a list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Subtraction of the two first elements of a list
 * Return: void
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	size_t stack_size;

	stack_size = dlistint_len(*stack);
	if (stack_size < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	sub_dnodeint(stack);
}

/**
 * op_div - Division of two elements of a list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Division of the two first elements of a list
 * Return: void
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	size_t stack_size;

	stack_size = dlistint_len(*stack);
	if (stack_size < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);

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

	div_dnodeint(stack);
}

/**
 * op_mul - Multiplies two elements of a list
 * @stack: doubly linked list
 * @line_number: current line number
 *
 * Description: Multiplies two first elements of a list
 * Return: void
 */
void op_mul(stack_t **stack, unsigned int line_number)
{
	size_t stack_size;

	stack_size = dlistint_len(*stack);
	if (stack_size < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	mul_dnodeint(stack);
}
