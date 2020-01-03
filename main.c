#include "monty.h"
/**
 * int - initializes monty interpreter
 * @ac: input number of arguments
 * @av: input arguments
 *
 * Description: initializes monty interpreter and get arguments from stdin
 * Return: 0
 */
int main (int ac, char **av)
{
	int status_read;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	status_read = read_montyfile(av[1]);
	if (status_read == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	return (0);
}
