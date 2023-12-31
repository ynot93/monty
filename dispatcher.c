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
	if (strcmp(opcode, "push") == 0)
		_push(stack, line_number);
	else if (strcmp(opcode, "pall") == 0)
		_pall(stack, line_number);
	else if (strcmp(opcode, "pint") == 0)
		_pint(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		_pop(stack, line_number);
	else if (strcmp(opcode, "swap") == 0)
		_swap(stack, line_number);
	else if (strcmp(opcode, "add") == 0)
		_add(stack, line_number);
	else if (strcmp(opcode, "nop") == 0)
		_nop(stack, line_number);
	else if (strcmp(opcode, "mul") == 0)
		_mul(stack, line_number);
	else if (strcmp(opcode, "mod") == 0)
		_mod(stack, line_number);
	else if (strcmp(opcode, "div") == 0)
		_div(stack, line_number);
	else if (strcmp(opcode, "sub") == 0)
		_sub(stack, line_number);
	else if (strcmp(opcode, "pchar") == 0)
		_pchar(stack, line_number);
	else if (strcmp(opcode, "pstr") == 0)
		_pstr(stack, line_number);
	else if (strcmp(opcode, "rotl") == 0)
		_rotl(stack, line_number);
	else if (strcmp(opcode, "rotr") == 0)
		_rotr(stack, line_number);
	else if (strcmp(opcode, "stack") == 0)
		_stack(stack, line_number);
	else if (strcmp(opcode, "queue") == 0)
		_queue(stack, line_number);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		free_stack_memory(stack);
		exit(EXIT_FAILURE);
	}
}
