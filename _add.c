#include "monty"
/**
 * _add - adds 2 numbers
 * @stack: head of the stack
 * @line_number: line of the command
 */
void _add(stack_t, unsigned int line_number)
{
	stack_t  *temp, *aux, *node;

	line_number = line_number;

	if ((*stack)->next != NULL)
	{
		(*stack)->next->n += (*stack)->n;
	}
	temp = *stack;
	if (temp != NULL)
	{
		aux = temp->next;
		node = temp;
		if (aux != NULL)
			aux->prev = NULL;
		free(node);
		*stack = aux;
	}
}
