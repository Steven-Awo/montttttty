#include "monty.h"
/**
 * addnode - A function that adds nodes to the headr of the
 * stack
 * @headr: the stack headr
 * @nm: the new_value to be added
 * Return: void
*/

void addnode(stack_t **headr, int nm)

{

	stack_t *new_nod, *auxx;

	auxx = *headr;
	new_nod = malloc(sizeof(stack_t));
	if (new_nod == NULL)
	{
	printf("Error\n");
	exit(0);
	}
	if (auxx)
	{
	auxx->prev = new_nod;
	}
	new_nod->nm = nm;
	new_nod->next = *headr;
	new_nod->prev = NULL;
	*headr = new_nod;
}

