#include "monty.h"
/**
 * f_div - A function that divides the two topmost elements of
 * the stack.
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: no return
*/
void f_div(stack_t **headr, unsigned int counters)
{
	stack_t *x;
	int leng = 0, auxx;

	x = *headr;
	while (x)
	{
	x = x->next;
	leng++;
	}
	if (leng < 2)
	{
	fprintf(stderr, "L%d: can't div, stack too short\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	x = *headr;
	if (x->nm == 0)
	{
	fprintf(stderr, "L%d: division by zero\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	auxx = x->next->nm / x->nm;
	x->next->nm = auxx;
	*headr = x->next;
	free(x);
}

