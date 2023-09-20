#include "monty.h"

/**
* free_stack - A function that frees up a doubly linked list
* @headr: the stack headr
*/

void free_stack(stack_t *headr)

{
	stack_t *auxx;

	auxx = headr;
	while (headr)
	{
	auxx = headr->next;
	free(headr);
	headr = auxx;
	}
}

