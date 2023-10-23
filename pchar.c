#include "monty.h"

/**
 * _pchar - Prints character at the top then new line.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in Monty bytecode file.
 *
 * Return: Nothing.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *top = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;

	if (num < 0 || num > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (char)num);

	*stack = top->next;

	if (top->next != NULL)
		top->next->prev = NULL;

	free(top);
}
