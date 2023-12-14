#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
    if (!head || !*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *head;
    int mod_result = temp->next->n % temp->n;
    temp->next->n = mod_result;
    *head = temp->next;
    free(temp);
}

