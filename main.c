#include "monty.h"
#include <stdio.h>
/**
 * main -Entry pint of the program
 * @argc: Number of arguments
 * @argv: Array of arguments.
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	stack_t *stack = NULL;
	unsigned int line_num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open the file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		line_num++;
		/*parse the line, and execute the opcode*/
	}
	free(line);
	fclose(file);
	free_stack_memory(&stack);
	return (0);
}
