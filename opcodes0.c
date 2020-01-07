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
	int val_num;
	int n_value;

	/* Validates if argument is a number or NOT */
	val_num = _isnumber(mtdata.n);

	/* if argument is not number or NULL (Nothing) */
	if (val_num == 0)
	{
		dprintf(2, "L%d: usage: push integer\n", line_number);
		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	n_value = atoi(mtdata.n);
	add_dnodeint(&(*stack), n_value);
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
	if (mtdata.stack == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		exit(EXIT_FAILURE);
	}

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
	if (mtdata.stack == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		exit(EXIT_FAILURE);
	}

	delete_dnodeint_at_index(stack, 0);
}

/**
 * op_swap - Swap two elements of a list
 * @stack: do ubly linked list
 * @line_number: current line number
 *
 * Description: Swap the firsy two elements of a list
 * Return: void
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	size_t stack_size;

	stack_size = dlistint_len(*stack);
	if (stack_size < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	swap_dnodeint(stack);
}
