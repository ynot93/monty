#include "monty.h"

/**
 * _mul - Multiplies the second top element to the first.
 * @stack: A pointer to the stack.
 * @line_number: Line number in the bytecode file.
 *
 * Return: Nothing.
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *one = *stack;
	stack_t *two = one->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	two->n *= one->n;
	*stack = two;
	two->prev = NULL;
	free(one);
}
