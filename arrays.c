#include "monty.h"
/**
 * _split - Function that split and add the content of array
 * into a list of arguments.
 *
 * @buffer: Pointer type char
 * @separator: string of char separator
 * @fp: input file
 *
 * Description: Splits the buffer with the separator and creates an array
 * Return: Array with the list of arguments or NULL if failed
 */
char **_split(char *buffer, char *separator, FILE *fp)
{
	char *token, *buff_copy = NULL, **tokens;
	int len = 0;

	tokens = malloc(sizeof(tokens) * 1024);
	if (tokens == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free(buffer);
		fclose(fp);
		exit(EXIT_FAILURE);
	}

	buff_copy = malloc(sizeof(buffer));
	if (buff_copy == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free(buffer);
		free(tokens);
		fclose(fp);
		exit(EXIT_FAILURE);
	}
	strcpy(buff_copy, buffer);
	token = strtok(buff_copy, separator);

	if (token == NULL)
	{
		/* free(buff_copy); */
		free(tokens);
		return (NULL);
	}

	while (token != NULL)
	{
		tokens[len] = token;
		token = strtok(NULL, separator);
		len++;
	}
	tokens[len] = NULL;
	return (tokens);
}

/**
 * _array_len - lenght of array
 * @_array: input array
 *
 * Description: get the linght of a array
 * Return: int
 */
int _array_len(char **_array)
{
	int len = 0;

	while (_array[len] != NULL)
		len++;

	return (len);
}
