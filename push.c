#include "monty.h"

/**
 * _push - Pushes an element to the stack.
 * @stack: Double pointer to the top of the stack.
 * @input: The string containing the value to push.
 * @line_number: The line number in the Monty file.
 *
 * Return: Void
 */
void _push(stack_t **stack, char *input, unsigned int line_number)
{
	stack_t *new_node;
	int i;

	if (input == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	i = 0;

	while (input[i])
	{
		if (input[i] == '-' && i == 0)
		{
			i++;
			continue;
		}
		if (input[i] < '0' || input[i] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Can't malloc\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(input);
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
