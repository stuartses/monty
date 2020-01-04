#include "monty.h"

/**
 * print_dlistint - prints all elements of a linked list
 * @h: head of linked list
 *
 * Description: prints all the elements of a dlistint_t list
 * Return: number of elements
 */
size_t print_dlistint(const stack_t *h)
{
	unsigned int i;
	const stack_t *node;

	node = h;
	i = 0;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		i++;
	}
	return (i);
}
