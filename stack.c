#include "monty.h"

/**
 * _stack - Sets the mode to STACK.
 * @stack: A pointer to the top mode node of a stack_t.
 * @line_number: Working line number of a Monty bytecode file.
 *
 * Description: This function sets the mode to STACK.
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	monty_mode = STACK;
}
