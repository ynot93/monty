#include "monty.h"

/**
 * free_stack_memory - Frees memory allocated for stack.
 * @stack: Double pointer to the stack.
 *
 * Return: Nothing
 */
void free_stack_memory(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*stack = NULL;
}
