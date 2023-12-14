#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: not used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *temp;
    (void)counter;

    temp = *head;
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}

