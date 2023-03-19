#include "push_swap.h"

void	ft_push(t_stack *x, int num)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	while (x->next != NULL)
		x = x->next;
	new->data = num;
	x->next = new;
}