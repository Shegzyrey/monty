#include "monty"
/**
 * _swap - change of 2 nodes
 * @stack: head of the stack
 * @line_number: line of the command
 */
void _swap(stack_t, unsigned int line_number)
{
	int temp, aux;

	line_number = line_number;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprint(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->n;
		aux = (*stack)->next->n;
		(*stack)->n = aux;
		(*stack)->next->n = temp;
	}
}
