#include "monty.h"
/**
 * f_mul - A function that multiplies the top two elements
 * in the stack.
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
*/
void f_mul(stack_t **headr, unsigned int counters)
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
	fprintf(stderr, "L%d: can't mul, stack too short\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	x = *headr;
	auxx = x->next->nm * x->nm;
	x->next->nm = auxx;
	*headr = x->next;
	free(x);
}

