#include "monty.h"
/**
 * _isnumber - Check if a string is a number
 * @str: input string
 *
 * Desciption: check inf a string is number or not
 * Return: 1 if is number, 0 if not.
 */

int _isnumber(char *str)
{
	int j = 0;

	if (str == NULL)
		return (0);

	while (str[j] != '\0')
	{
		if (j == 0 && str[j] == '-')
		{
			j++;
			continue;
		}

		if (!isdigit(str[j]))
			return (0);
		j++;
	}
	return (1);
}
