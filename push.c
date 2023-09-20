#include "monty.h"

/**
 * f_push - A function that adds node to the stack
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
*/

void f_push(stack_t **headr, unsigned int counters)
{
	int x;
	int y = 0, flagg = 0;

	if (bus.argg)
	{
	if (bus.argg[0] == '-')
		y++;
	for (; bus.argg[y] != '\0'; y++)
	{
	if (bus.argg[y] > 57 || bus.argg[y] < 48)
		flagg = 1; }
	if (flagg == 1)
	{ fprintf(stderr, "L%d: usage: push integer\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counters);
	fclose(bus.filee);
	free(bus.contentt);
	free_stack(*headr);
	exit(EXIT_FAILURE); }
	x = atoi(bus.argg);
	if (bus.l_i_f_i == 0)
		addnode(headr, x);
	else
		addqueue(headr, x);
}
