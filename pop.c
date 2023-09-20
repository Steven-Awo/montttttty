#include "monty.h"

/**
 * f_pop - A function that prints the top
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
*/

void f_pop(stack_t **headr, unsigned int counters)

{
	stack_t *x;

	if (*headr == NULL)
	{
	fprintf(stderr, "L%d: can't pop an empty stack\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	x = *headr;
	*headr = x->next;
	free(x);
}
