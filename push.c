#include "monty.h"

/**
 * _push - Pushes an element to the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_num: The line number in the Monty file.
 *
 * Return: Void
 */
void _push(stack_t **stack, unsigned int line_num)
{
	stack_t *new_node;
	char *arg;

	arg = strtok(NULL, " \t\n");

	if (arg == NULL || !is_int(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Can't malloc\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(arg);
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * is_int - Checks if string is an integer.
 * @str: Strint to be checked.
 *
 * Return: 1 if integer, 0 if not.
 */
int is_int(const char *str)
{
	if (!str || *str == '\0')
	{
		return (0);
	}

	if (*str == '+' || *str == '-')
	{
		str++;
	}

	for (; *str != '\0'; str++)
	{
		if (!isdigit(*str))
			return (0);
	}
	return (1);
}
