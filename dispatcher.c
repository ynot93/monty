#include "monty.h"

/**
 * dispatch - Fires off the actions as per opcodes input.
 * @stack: Double pointer to the stack.
 * @opcode: The operatin to be performed.
 * @line_number: The line number in the monty bytecode file.
 *
 * Return: Nothing.
 */
void dispatch(stack_t **stack, const char *opcode, unsigned int line_number)
{
	switch (opcode[0])
	{
		case 'p':
			if (strcmp(opcode, "push") == 0)
				_push(stack, line_number);
			else if (strcmp(opcode, "pall") == 0)
				_pall(stack, line_number);
			else if (strcmp(opcode, "pint") == 0)
				_pint(stack, line_number);
			else if (strcmp(opcode, "pop") == 0)
				_pop(stack, line_number);
			break;
		case 's':
			if (strcmp(opcode, "swap") == 0)
				_swap(stack, line_number);
			break;
		case 'a':
			if (strcmp(opcode, "add") == 0)
				_add(stack, line_number);
			break;
		default:
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			free_stack_memory(stack);
			exit(EXIT_FAILURE);
	}
}
