#include "monty.h"

/**
 * dlistint_len - numbers of elements in a linked list
 * @h: input linked list
 *
 * Description: return the number of elements in alinked list
 * Return: i
 */
size_t dlistint_len(stack_t *h)
{
	const stack_t *node;
	unsigned int i;

	i = 0;
	node = h;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}

	return (i);
}
