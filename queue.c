#include "monty.h"

/**
 * _queue - Sets the mode to QUEUE.
 * @stack: A pointer to the top of a stack.
 * @line_number: Line number in the Monty bytecode file.
 *
 * Description: This function sets the mode to QUEUE.
 */
void _queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	monty_mode = QUEUE;
}
