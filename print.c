#include "monty.h"

/**
 * f_pint - A fuunction that prints the top
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
*/

void f_pint(stack_t **headr, unsigned int counters)

{
	if (*headr == NULL)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", (*headr)->nm);
}
