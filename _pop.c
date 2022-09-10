#included "monty.h"
/**
 * _pop - erases the last node
 * @head: stack head
 * @line_number: line of the command
 *
 * Return: 1 on success.
 * On error, return -1.
 */
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp, *auxx, *node;

	line_number = line_number;

	temp = *head;
	if (temp != NULL)
	{
		aux = temp->next;
		noe = temp;
		if (aux != NULL)
			aux->prev = NULL;
		free(node);
		*head = aux;
	}
}
