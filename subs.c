#include "monty.h"

/**
 * f_sub- A function that sustration from the stack
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
 */

void f_sub(stack_t **headr, unsigned int counters)

{
	stack_t *auxx;
	int subss, nods;

	auxx = *headr;
	for (nods = 0; auxx != NULL; nods++)
	{
	auxx = auxx->next;
	}
	if (nods < 2)
	{
	fprintf(stderr, "L%d: can't sub, stack too short\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE);
	}
	auxx = *headr;
	subss = auxx->next->nm - auxx->nm;
	auxx->next->nm = subss;
	*headr = auxx->next;
	free(auxx);
}
