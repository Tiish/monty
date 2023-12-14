#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 *
 * Return: No return
 */
void f_swap(stack_t **head, unsigned int counter) {
    if (*head == NULL || (*head)->next == NULL) {
        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
        // Consider appropriate cleanup or error handling here
        return;
    }

    int temp = (*head)->n;
    (*head)->n = (*head)->next->n;
    (*head)->next->n = temp;
}

