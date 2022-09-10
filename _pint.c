#include "monty.h"
/**
 * _pint - function that prints the value at the top of stack
 * @stack: a pointer to the stack
 * @line_number: the number of lines
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	}
	(void)line_number;
	printf("%d\n", temp->n);
}
