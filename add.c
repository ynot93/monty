#include "monty.h"

/**
 * _add - Adds the top two values of a stack_t linked list.
 * @stack: Pointer to top mode node of a stack_t linked list.
 * @line_number: The line number of the Monty bytecodes file.
 *
 * Description: The result is stored in the second top value node
 *              from the top and the top value is removed.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	_pop(stack, line_number);
}
