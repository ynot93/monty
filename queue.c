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

/**
 * add_queue - Adds an element to the end of a doubly linked list.
 * @stack: A pointer to the head of the doubly linked list.
 * @n: The integer value to be added.
 */
void add_queue(stack_t **stack, int n)
{
	stack_t *new_node;
	stack_t *last = *stack;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
}
