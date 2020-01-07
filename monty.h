#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * montyglob_s - global variables for monty program
 * @n: value from readed line
 * @fp: filename
 * @buffer: readed line
 * @stack: doubly linked list
 *
 * Description: stores the variables for be used in Monty program
 */
typedef struct montyglob_s
{
	char *n;
	FILE *fp;
	char *line_buf;
	char *opcode;
	stack_t *stack;
} montyglob_t;

extern montyglob_t mtdata;

int _isnumber(char *str);
void exec_line(unsigned int line_count);
unsigned int _read_fpline(void);
int read_montyfile(char *filename);
void op_pall(stack_t **stack, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void op_mul(stack_t **stack, unsigned int line_number);
void (*get_op_func(char *s))(stack_t **, unsigned int);
stack_t *add_dnodeint(stack_t **head, const int n);
size_t print_dlistint(const stack_t *h);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
void first_dlistint(const stack_t *h);
void swap_dnodeint(stack_t **head);
void sum_dnodeint(stack_t **stack);
void sub_dnodeint(stack_t **stack);
void div_dnodeint(stack_t **stack);
void mul_dnodeint(stack_t **stack);
size_t dlistint_len(stack_t *h);
void free_dlistint(stack_t *head);
#endif /* HOLBERTON_H */
