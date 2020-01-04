#include "monty.h"
/**
 * get_op_func - corresponds to the opcode
 * @s: input operator
 *
 * Description: function that corresponds to the opcode
 */

/* void (*f)(stack_t **stack, unsigned int line_number)*/

	/*int (*f)(int a, int b);

	  int (*get_op_func(char *s))(int, int)*/
void (*get_op_func(char *s))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t ops[] = {
		{"pall", op_pall},
		{"push", op_push},
		{NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if(strcmp(ops[i].opcode, s) == 0)
			return(ops[i].f);
		i++;
	}

	return (NULL);
}
