#include "monty.h"
/**
 * _push - puts a number into the top node 
 * @head: a pointer to the first stack
 * @line_number: the number of lines
 *
 */
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node;

	(void)line_number;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free(new_node);
		print_err(3, line_number, "");
		exit(EXIT_FALIURE);
	}
	new_mode->n = global_number;
	if (*head != NULL)
		(*head)->prev = new_mode;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
}
