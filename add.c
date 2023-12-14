#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
    if (!head || !(*head) || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *head;
    int sum = temp->n + temp->next->n;
    temp->next->n = sum;
    *head = temp->next;
    free(temp);
}

