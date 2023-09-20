#include "monty.h"
/**
 * f_queue - A function that prints the top
 * @headr: the stack's headr
 * @counters: the line_number counters
 * Return: void
*/

void f_queue(stack_t **headr, unsigned int counters)
{
	(void)headr;
	(void)counters;
	bus.l_i_f_i = 1;
}

/**
 * addqueue - A function that adds node to the stack's tail
 * @nm: the new_value to add
 * @headr: the stack's head
 * Return: void
*/

void addqueue(stack_t **headr, int nm)
{
	stack_t *new_nod, *auxx;

	auxx = *headr;
	new_nod = malloc(sizeof(stack_t));
	if (new_nod == NULL)
	{
	printf("Error\nm");
	}
	new_nod->nm = nm;
	new_nod->next = NULL;
	if (auxx)
	{
	while (auxx->next)
		auxx = auxx->next;
	}
	if (!auxx)
	{
	*headr = new_nod;
	new_nod->prev = NULL;
	}
	else
	{
	auxx->next = new_nod;
	new_nod->prev = auxx;
	}
}

