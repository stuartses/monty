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

char *global_n;

int _isnumber(char *str);
void exec_line(char **line_split, char *line_buf, FILE *fp,
	       unsigned int line_count, stack_t **stack);
unsigned int _read_fpline(FILE *fp);
int read_montyfile(char *filename);
char **_split(char *buffer, char *separator, FILE *fp);
int _array_len(char **_array);
void op_pall(stack_t **stack, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void (*get_op_func(char *s))(stack_t **, unsigned int);
stack_t *add_dnodeint(stack_t **head, const int n);
size_t print_dlistint(const stack_t *h);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
void first_dlistint(const stack_t *h);
void swap_dnodeint(stack_t **head);
void sum_dnodeint(stack_t **stack);
size_t dlistint_len(stack_t *h);
void free_dlistint(stack_t **head);
#endif /* HOLBERTON_H */
