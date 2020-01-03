#include "monty.h"
/**
 *
 *
 *
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
