#include "monty.h"

/**
 * _pstr - Prints a string staring from top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number of the bytecode file.
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *stack;

	while (current && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}
