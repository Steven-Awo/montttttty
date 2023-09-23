#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * getline - A function that gets the info of a line
 * @contents: the contents
 * @sizez: the size
 * @file: the file
 * Return: 0 (successful)
 */

size_t getline(char **contents, size_t *sizez, FILE *file)

{
	size_t leng = 0;
	char x;

	*sizez = 128;
	*contents = malloc(*sizez);
	if (*contents == NULL)
	{
	return -1;
	}
	while ((x = fgetc(file)) != EOF && x != '\n')
	{
	if (leng == *sizez - 1)
	{
	*sizez *= 2;
	*contents = realloc(*contents, *sizez);
	if (*contents == NULL)
	{
	return -1;
	}}
	(*contents)[leng++] = x;
	}
	(*contents)[leng] = '\0';
	return leng;
}

/**
 * main - A function of monty code interpreter
 * @argc: the number of the arguments
 * @argv: the monty file's location
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	char *contents;
	FILE *file;
	size_t sizez = 0;
	ssize_t read_line_ = 1;
	stack_t *stack = NULL;
	unsigned int counterr = 0;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.filee = file;
	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	while (read_line_ > 0)
	{
	contents = NULL;
	read_line_ = getline(&contents, &sizez, file);
	bus.contentt = contents;
	counterr++;
	if (read_line_ > 0)
	{
	execute(contents, &stack, counterr, file);
	}
	free(contents);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
