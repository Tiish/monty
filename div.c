#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
{
    if (!head || !*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", counter);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *head;
    int div_result = temp->next->n / temp->n;
    temp->next->n = div_result;
    *head = temp->next;
    free(temp);
}

