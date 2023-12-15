#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
* Auth : Tiish
* Github : Tiish
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

