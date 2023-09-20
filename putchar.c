#include "monty.h"
/**
 * f_pchar - A function that prints the char at the top in
 * the stack, followed by a new line
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
*/

void f_pchar(stack_t **headr, unsigned int counters)

{
	stack_t *x;

	x = *headr;
	if (!x)
	{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	if (x->nm > 127 || x->nm < 0)
	{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	printf("%c\n", x->nm);
}

