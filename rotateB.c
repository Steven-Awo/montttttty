#include "monty.h"

/**
 * f_rotr- A function that rotates the stack from top to
 * the bottom
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
 */

void f_rotr(stack_t **headr, __attribute__((unused)) unsigned int counters)

{
	stack_t *copyy;

	copyy = *headr;
	if (*headr == NULL || (*headr)->next == NULL)
	{
		return;
	}
	while (copyy->next)
	{
		copyy = copyy->next;
	}
	copyy->next = *headr;
	copyy->prev->next = NULL;
	copyy->prev = NULL;
	(*headr)->prev = copyy;
	(*headr) = copyy;
}
