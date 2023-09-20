#include "monty.h"
/**
* execute - A function that executes the opcode
* @headr: the head of the linked list in stack
* @counters: the line_counter counters
* @file: the monty file pointer
* @contentt: the line contents
* Return: void
*/
int execute(char *contentt, stack_t **headr, unsigned int counters, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"headr", f_stack},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *opd;

	opd = strtok(contentt, " \n\t");
	if (opd && opd[0] == '#')
		return (0);
	bus.argg = strtok(NULL, " \n\t");
	while (opst[x].opcode && opd)
	{
		if (strcmp(opd, opst[x].opcode) == 0)
		{ opst[x].f(headr, counters);
		return (0);
		}
		x++;
	}
	if (opd && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counters, opd);
	fclose(file);
	free(contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE); }
	return (1);
}
