#include "monty.h"
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
	int line_count = 0;
	ssize_t line_size;
	char **line_split;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (-1);

	line_size = getline(&line_buf, &line_buf_size, fp);
	while (line_size != -1)
	{
		line_count++;
		line_split = _split(line_buf, "\t ");
		printf("val 0: %s\n", line_split[0])
		printf("val 1: %s\n", line_split[1])
		line_size = getline(&line_buf, &line_buf_size, fp);
	}
	free(line_buf);
	line_buf = NULL;
	fclose(fp);

	return (line_count);
}
