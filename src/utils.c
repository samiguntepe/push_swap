/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:43:49 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/16 14:08:31 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int compare(int a, int b)
{
	return (a <= b);
}

void    is_sorted(t_stack *root)
{
	int		i;
	t_stack	*iter;

	i = 1;
	iter = root;
	while (iter)
	{
		if (iter->tag != i)
			exit(0);
		iter = iter->next;
		i++;
	}
}

int	stack_size(t_stack *stck)
{
	int	i;

	i = 0;
	while (stck->next != NULL)
	{
		stck = stck->next;
		i++;
	}
	return (i);
}