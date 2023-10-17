#include "monty.h"

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

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open the file %s\n", av[1]);
		exit(EXIT_FAILURE)
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		/*parse the line, and execute the opcode*/
	}
	free(line);
	fclose(file);
	free_stack_memory(&stack);
}
