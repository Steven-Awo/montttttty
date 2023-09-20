#include "monty.h"

/**
 * f_pstr - A function that prints the string out, starting from
 * the top of the stack, followed by a new line
 * @headr: stack headr
 * @counters: line_number
 * Return: no return
*/

void f_pstr(stack_t **headr, unsigned int counters)

{
	stack_t *x;
	(void)counters;

	x = *headr;
	while (x)
	{
	if (x->nm > 127 || x->nm <= 0)
	{
	break;
	}
	printf("%c", x->nm);
	x = x->next;
	}
	printf("\n");
}
