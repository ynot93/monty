#include "monty.h"

/**
 * _pop - Prints value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_num: Line number of the Monty bytecode.
 *
 * Return: Nothing.
 */
void _pop(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	*stack = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = NULL;
	}
	free(temp);
}
