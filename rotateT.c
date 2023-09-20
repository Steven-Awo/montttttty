#include "monty.h"

/**
 * f_rotl- A function that rotates the stack from bottom to
 * the top
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
 */

void f_rotl(stack_t **headr,  __attribute__((unused)) unsigned int counters)

{
	stack_t *tmpr = *headr, *auxx;

	if (*headr == NULL || (*headr)->next == NULL)
	{
	return;
	}
	auxx = (*headr)->next;
	auxx->prev = NULL;
	while (tmpr->next != NULL)
	{
		tmpr = tmpr->next;
	}
	tmpr->next = *headr;
	(*headr)->next = NULL;
	(*headr)->prev = tmpr;
	(*headr) = auxx;
}
