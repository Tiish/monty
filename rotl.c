#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top
 * @head: Stack head
 * @counter: Line number
 *
 * Return: No return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    stack_t *tmp = *head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    tmp->next->prev = tmp;
    tmp->next->next = NULL;
}

