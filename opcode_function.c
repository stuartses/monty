#include "monty.h"
/**
 * get_op_func - corresponds to the opcode
 * @s: input operator
 *
 * Description: function that corresponds to the opcode
 * Return: void
 */

void (*get_op_func(char *s))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t ops[] = {
		{"pall", op_pall},
		{"push", op_push},
		{"pint", op_pint},
		{NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
