/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:12:52 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/16 14:26:24 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack *stack_a, t_stack *stack_b)
{
	int	size;
	int	base;
	int	wise;

	base = base_counter(find_max(stack_a)->data);
	wise = 0;
	while (base)
	{
		size = stack_size(stack_a);
		while (size)
		{
			if (stack_a->tag >> wise & 1)
			{
				ra(stack_a,1);
			}
			else
			{
				pb(stack_a, stack_b);
			}
			size--;
		}
		size = stack_size(stack_b);
		while (size)
		{
			pa(stack_a, stack_b);
			size--;
		}
		wise++;
		base--;
	}
}