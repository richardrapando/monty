#include "monty.h"
/**
 * f_pstr - prints string starting at the top of stack
 * followed by a new line
 * @head: head of stack
 * @counter: number of line
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
