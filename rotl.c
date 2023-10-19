#include "monty.h"

/**
 * _rotl - Rotates the stack to the top.
 * @stack: Pointer to the stack.
 * @line_number: Line number of Monty bytecode file.
 *
 * Return: Nothing.
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *one = *stack;
	stack_t *two = one->next;
	stack_t *last = one;
	(void)line_number;

	if (*stack && (*stack)->next)
	{
		while (last->next)
			last = last->next;

		*stack = two;
		one->next = NULL;
		last->next = one;
		two->prev = NULL;

		if (two->next)
			two->next->prev = NULL;
	}
}
