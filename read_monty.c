#include "monty.h"
int global_n;
/**
 *
 *
 *
 */
int read_montyfile(char *filename)
{
	FILE *fp;
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	unsigned int line_count = 0;
	ssize_t line_size;
	char **line_split;
	stack_t *stack = NULL;
	void (*func)(stack_t **, unsigned int);

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (-1);

	line_size = getline(&line_buf, &line_buf_size, fp);
	while (line_size != -1)
	{
		line_count++;
		line_split = _split(line_buf, " \t\n\r");
		global_n = atoi(line_split[1]);

		func = *get_op_func(line_split[0]);
		if (func == NULL)
		{
			dprintf(2, "L%d: unknown instruction %s\n", line_count,
				line_split[0]);

			free(line_split);
			free(line_buf);
			fclose(fp);
			exit(EXIT_FAILURE);
		}

		func(&stack, line_count);
		line_size = getline(&line_buf, &line_buf_size, fp);
		free(line_split);
	}
	free(line_buf);
	line_buf = NULL;
	fclose(fp);

	return (line_count);
}
