#include "monty.h"

/**
 * f_add - A function that adds the topmost two elements of
 * the stack.
 * @headr: the stack head
 * @counters: the line_number counters
 * Return: void
*/

void f_add(stack_t **headr, unsigned int counters)

{
	stack_t *x;
	int leng = 0;
	int auxx;

	x = *headr;
	while (x)
	{
	x = x->next;
	leng++;
	}
	if (leng < 2)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	x = *headr;
	auxx = x->nm + x->next->nm;
	x->next->nm = auxx;
	*headr = x->next;
	free(x);
}
