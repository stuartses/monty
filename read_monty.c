#include "monty.h"
char *global_n;

/**
 * read_montyfile - read file
 * @filename: string whit filename
 *
 * Description: read the file from arguments
 * Return: numer of lines in file
 */
int read_montyfile(char *filename)
{
	FILE *fp;
	unsigned int line_count = 0;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (-1);

	line_count = _read_fpline(fp);

	fclose(fp);

	return (line_count);
}

/**
 * _read_fpline - Process all lines form file
 * @fp: input file
 *
 * Description: Read each line from the input file and splits
 * Return: number of lines
 */
unsigned int _read_fpline(FILE *fp)
{
	stack_t *stack = NULL;
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	unsigned int line_count = 0;
	ssize_t line_size;
	char **line_split;
	int len_split;

	line_size = getline(&line_buf, &line_buf_size, fp);
	while (line_size != -1)
	{
		line_count++;
		line_split = _split(line_buf, " \t\n\r", fp);
		if (line_split != NULL)
		{
			len_split = _array_len(line_split);
			if (len_split > 1)
				global_n = line_split[1];
			else
				global_n = "none";

			exec_line(line_split, line_buf, fp, line_count, &stack);
			free(line_split);
		}

		line_size = getline(&line_buf, &line_buf_size, fp);
	}
	free(line_buf);
	free_dlistint(&stack);

	return (line_count);
}

/**
 * exec_line - Executes command in the line
 * @line_split: array with data fro readed line
 * @line_buf: buffer with dat, only needed to free in error
 * @fp:input file, only needed to free in error
 * @line_count: current line
 * @stack: dubly linked list
 *
 * Descrition: Executes command from the readed line
 * Return: void
 */
void exec_line(char **line_split, char *line_buf, FILE *fp,
	       unsigned int line_count, stack_t **stack)
{
	void (*func)(stack_t **, unsigned int);

	func = *get_op_func(line_split[0]);
	if (func == NULL)
	{
		dprintf(2, "L%d: unknown instruction %s\n",
			line_count, line_split[0]);

		free(line_split);
		free(line_buf);
		fclose(fp);
		free_dlistint(stack);
		exit(EXIT_FAILURE);
	}

	if (_isnumber(global_n) == 0 && strcmp(line_split[0], "push") == 0)
	{
		dprintf(2, "L%d: usage: push integer\n", line_count);

		free(line_split);
		free(line_buf);
		fclose(fp);
		free_dlistint(stack);
		exit(EXIT_FAILURE);
	}

	if (stack == NULL && (
		    strcmp(line_split[0], "pint") == 0 ||
		    strcmp(line_split[0], "pop") == 0
		    )
		)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_count);

		free(line_split);
		free(line_buf);
		fclose(fp);
		free_dlistint(stack);
	}
	func(stack, line_count);
}
