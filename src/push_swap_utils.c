/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:53:20 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/16 12:29:00 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*push(t_stack *root, int num)
{
	t_stack	*iter;

	if (root == NULL)
	{
		root = (t_stack *)malloc(sizeof(t_stack));
		root->data = num;
		root->next = NULL;
	}
	iter = root;
	while (iter->next != NULL)
		iter = iter->next;
	t_stack *temp = (t_stack *)malloc(sizeof(t_stack));
	temp->data = num;
	temp->next = NULL;
	iter->next = temp;
	return root;
}

int	pop(t_stack *root)
{
	int		popped_data;
	t_stack	*temp;
	t_stack	*iter;

	iter = root;
	while(iter->next->next != NULL)
		iter = iter->next;
	temp = iter->next;
	popped_data = temp->data;
	free(temp);
	iter->next = NULL;
	return (popped_data);
}

int	first_pop(t_stack *root)
{
	int		popped_data;
	t_stack	*temp;
	t_stack	*iter;
	
	iter = root;
	temp = iter->next;
	popped_data = temp->data;
	iter->next = temp->next;
	free(temp);
	return (popped_data);
}

int	top(t_stack *root)
{
	t_stack	*iter;
	int		rdata;

	iter = root;
	while (iter->next != NULL)
		iter = iter->next;
	rdata = iter->data;
	return (rdata);
}

void	push_numbers(char **argv, t_stack *root)
{
	int *nums;
	int i;

	nums = all_num(argv);
	i = 0;
	while(nums[i])
	{
		root->index = i;
		push(root,nums[i]);
		i++;
		root = root->next;
	}
}