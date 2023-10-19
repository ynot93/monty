#include "monty.h"

/**
 * _rotr - Rotates the stack to the bottom
 * @stack: A pointer to stack
 * @line_number: Working line number of Monty bytecodes file.
 *
 * Description: Rotates the stack by moving the top element
 * to the bottom.
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		for (temp = *stack; temp->next != NULL; temp = temp->next)
		{
		}
		temp->next = *stack;
		temp->prev->next = NULL;
		temp->prev = NULL;
		(*stack)->prev = temp;
		(*stack) = temp;
	}
}
