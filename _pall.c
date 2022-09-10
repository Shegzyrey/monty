#include "monty.h"
/**
 * _pall =- prints all elements of the stack
 * @stack: a pointer to the stack
 * @line_number: the number of lines
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	stack_t *temp = *stack;

	(void)line_number;
	for (; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		i++;
	}
}
