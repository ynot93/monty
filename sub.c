#include "monty.h"

/**
 * _sub - Subtracts the second value from the top of
 *             a stack_t linked list.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: Working line number of Monty bytecodes file.
 *
 * Description: The result is stored in the second value node
 *              from top and the top value is removed.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->next->n -= (*stack)->next->n;
	_pop(stack, line_number);
}
