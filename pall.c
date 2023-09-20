#include "monty.h"
/**
 * f_pall - A function that prints the stack
 * @headr: the stack's headr
 * @counters: not needed
 * Return: void
*/

void f_pall(stack_t **headr, unsigned int counters)

{
	stack_t *x;
	(void)counters;

	x = *headr;
	if (x == NULL)
	{
	return;
	}
	while (x)
	{
	printf("%d\n", x->nm);
	x = x->next;
	}
}
