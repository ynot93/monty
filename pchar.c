#include "monty.h"

/**
 * _pchar - Prints the character in the top value
 *               node.
 * @stack: A pointer to the top node.
 * @line_number: Working line number of a Monty bytecodes file.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->next->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", value);
}
