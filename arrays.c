#include "monty.h"
/**
 * _split - Function that split and add the content of array
 * into a list of arguments.
 *
 * @buffer: Pointer type char
 * @separator: string of char separator
 *
 * Description: Splits the buffer with the separator and creates an array
 * Return: Array with the list of arguments or NULL if failed
 */
char **_split(char *buffer, char *separator)
{
	char *token, **tokens;
	int len = 0;

	tokens = malloc(sizeof(tokens) * 1024);

	if (tokens == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free(buffer);
		free(tokens);
		exit(EXIT_FAILURE);
	}


	token = strtok(buffer, separator);

	if (token == NULL)
	{
		free(buffer);
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
 *
 *
 */
int _array_len(char **_array)
{
	int len = 0;
	while (_array[len] != NULL)
		len++;

	return (len);
}
