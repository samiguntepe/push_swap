#include "push_swap.h"

int	base_counter(int max)
{
	int	i;

	i = 0;
	while (max)
	{
		max /= 2;
		i++;
	}
	return (i);
}

 t_stack	*find_max(t_stack *root)
{
	int		max;
	t_stack	*iter;
	t_stack	*tmp;

	iter = root;
	tmp = root;
	max = iter->data;
	while (iter)
	{
		if (iter->data > max)
		{
			tmp = iter;
			max = tmp->data;
		}
		iter = iter->next;
	}
	return (tmp);
}

void assign_tags(t_stack *root, int argc)
{
	t_stack *max;
	t_stack *iter;
	int tag = 1;
	
	while (--argc)
	{
		iter = root->next;
		max = find_max(root);
		while (iter)
		{
			if (iter->data < max->data && !iter->tag)
				max = iter;
			iter = iter->next;
		}
		max->tag = tag++;
	}
}