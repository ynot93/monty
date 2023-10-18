#include "monty.h"

/**
 * _pint - Prints value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_num: Line number of the Monty bytecode.
 *
 * Return: Nothing.
 */
void _pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
