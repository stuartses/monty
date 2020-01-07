#include "monty.h"

/**
 * read_montyfile - read file
 * @filename: string whit filename
 *
 * Description: read the file from arguments
 * Return: numer of lines in file
 */
int read_montyfile(char *filename)
{
	unsigned int line_count = 0;

	if (filename == NULL)
		return (-1);

	mtdata.fp = fopen(filename, "r");
	if (mtdata.fp == NULL)
		return (-1);

	line_count = _read_fpline();
	fclose(mtdata.fp);

	return (line_count);
}

/**
 * _read_fpline - Process all lines form file
 *
 * Description: Read each line from the input file and splits
 * Return: number of lines
 */
unsigned int _read_fpline(void)
{
	size_t line_buf_size = 0;
	unsigned int line_count = 0;
	ssize_t line_size;
	char *token;

	line_size = getline(&mtdata.line_buf, &line_buf_size, mtdata.fp);
	while (line_size != -1)
	{
		line_count++;
		token = strtok(mtdata.line_buf, " \t\n\r");
		mtdata.n = strtok(NULL, " \t\n\r");
		mtdata.opcode = token;
		if (token != NULL)
			exec_line(line_count);

		line_size = getline(&mtdata.line_buf, &line_buf_size,
				    mtdata.fp);
	}

	free(mtdata.line_buf);
	free_dlistint(mtdata.stack);

	return (line_count);
}

/**
 * exec_line - Executes command in the line
 * @line_count: current line
 *
 * Descrition: Executes command from the readed line
 * Return: void
 */
void exec_line(unsigned int line_count)
{
	void (*func)(stack_t **, unsigned int);

	func = *get_op_func(mtdata.opcode);

	if (func == NULL)
	{
		dprintf(2, "L%d: unknown instruction %s\n",
			line_count, mtdata.line_buf);

		free(mtdata.line_buf);
		fclose(mtdata.fp);
		free_dlistint(mtdata.stack);
		exit(EXIT_FAILURE);
	}

	func(&mtdata.stack, line_count);
}
