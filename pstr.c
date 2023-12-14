#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
    stack_t *temp;
    (void)counter;

    temp = *head;
    while (temp != NULL && temp->n > 0 && temp->n <= 127)
    {
        printf("%c", temp->n);
        temp = temp->next;
    }
    printf("\n");
}

