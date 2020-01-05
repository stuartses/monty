#include "monty.h"

/**
 * print_dlistint - prints all elements of a linked list
 * @h: head of linked list
 *
 * Description: prints all the elements of a doubly linked list
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

/**
 * first_dlistint - prints first elements of a linked list
 * @h: head of linked list
 *
 * Description: prints first the elements of a dubly linked list
 * Return: number of elements
 */
void first_dlistint(const stack_t *h)
{
	const stack_t *node;

	node = h;
	if (node != NULL)
		printf("%d\n", node->n);
}
