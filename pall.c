#include "monty.h"

/**
 * _pall - prints all values on the stack, starting from the top
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	for (tmp = *stack; tmp != NULL; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
	}
}
