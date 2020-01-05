#include "monty.h"
/**
 * delete_dnodeint_at_index - delete a element of a doubly linked list
 * @head: input list
 * @index: position
 *
 * Description: delete a element of a list ar position index
 * Return: 1 if is successfull or -1 if fails
 */

int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	unsigned int i = 0;
	stack_t *temp, *delete_node;

	temp = *head;

	while (temp != NULL)
	{
		if (index == 0)
		{
			if (temp->next != NULL)
				temp->next->prev = NULL;
			*head = temp->next;
			free(temp);
			return (1);
		}

		if (i == index - 1)
		{
			delete_node = temp->next;
			if (delete_node->next != NULL)
			{
				temp->next = delete_node->next;
				temp->next->prev = temp;
			}
			else
			{
				temp->next = NULL;
			}
			free(delete_node);
			return (1);
			}
		temp = temp->next;
		i++;
	}
	return (-1);
}
