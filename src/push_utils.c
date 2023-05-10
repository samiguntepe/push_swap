#include "push_swap.h"

t_stack	*push_first(t_stack *root, int num)
{
	t_stack *iter;
	t_stack *temp;
	iter = NULL;
	if(root->next == NULL)
	{
		temp = (t_stack *)malloc(sizeof(t_stack));
		temp->data = num;
		temp->next = NULL;
		root->next = temp;
	}
	else
	{
		iter = root->next;
		temp = (t_stack *)malloc(sizeof(t_stack));
		temp->data = num;
		temp->next = iter;
		root->next = temp;
	}
	return (root);
}

int	stack_count(t_stack *root)
{
	int i;

	i = 0;
	while (root->next != NULL)
	{
		root = root->next;
		i++;
	}
	return (i);
}