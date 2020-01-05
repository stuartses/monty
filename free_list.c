#include "monty.h"
/**
 * free_dlistint -  free a dlistint_t list
 * @head: head of doubly linked list
 *
 * Description: free memory of a doubly linked list
 * Return: void
 */
void free_dlistint(stack_t **head)
{
	stack_t *temp, *temp_next;

	if (*head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp_next = temp->next;
		free(temp);
		temp = temp_next;
	}

}
