#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - A structure function that doubly linked list
 * representation of a stack (or queue)
 * @nm: the integer
 * @prev: the previous element of the queue or stack
 * @next: the next element of the queue or stack
 * Description: the doubly linked list function structure for the
 * queues, stack, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int nm;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - A structure function of opcode
 * @opcode: the opcode to use
 * @f: the function that handles the opcode
 * Description: the opcode and its function structure for the
 * queues, stack, LIFO, FIFO Holberton project
 */

typedef struct instruction_s

{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - A structure function variables of -args,
 * file, line content
 * @argg: the value
 * @filee: the monty file pointer
 * @contentt: the content of the line
 * @l_i_f_i: the flag to change from stack <-> queue
 * Description: it carries the values through the whole program
 */
typedef struct bus_s

{
	char *argg;
	FILE *filee;
	char *contentt;
	int l_i_f_i;
}  bus_t;
extern bus_t bus;

char *_realloc(char *pntr, unsigned int the_old_size,
		unsigned int the_new_size);

char  *clean_line(char *content);

ssize_t getstdin(char **line_ptr, int file);

void f_pall(stack_t **headr, unsigned int numbers);

void f_push(stack_t **headr, unsigned int numbers);

void f_pint(stack_t **headr, unsigned int numbers);

int execute(char *content, stack_t **headr, unsigned int counters, FILE *file);

void free_stack(stack_t *headr);

void f_pop(stack_t **headr, unsigned int counters);

void f_swap(stack_t **headr, unsigned int counters);

void f_add(stack_t **headr, unsigned int counters);

void f_nop(stack_t **headr, unsigned int counters);

void f_sub(stack_t **headr, unsigned int counters);

void f_div(stack_t **headr, unsigned int counters);

void f_mul(stack_t **headr, unsigned int counters);

void f_mod(stack_t **headr, unsigned int counters);

void f_pchar(stack_t **headr, unsigned int counters);

void f_pstr(stack_t **headr, unsigned int counters);

void f_rotl(stack_t **headr, unsigned int counters);

void f_rotr(stack_t **headr, __attribute__((unused)) unsigned int counters);

void addnode(stack_t **headr, int nm);

void addqueue(stack_t **headr, int nm);

void f_queue(stack_t **headr, unsigned int counters);

void f_stack(stack_t **headr, unsigned int counters);

#endif
