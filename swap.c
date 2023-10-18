#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @stack: A pointer to the stack.
 * @line_number: The line number in the Monty file.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int temp;

	current = *stack;

	if (current == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
