/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:25:03 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/13 14:13:42 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	main(int argc,char **argv)
{
	t_stack	*stack_a;
	t_stack *stack_b;
	
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	
	if (argc < 2)
		exit(0);
	arg_control(argv);
	push_numbers(argv,stack_a);
	int i = 5;
	// ra(stack_a,1);
	sa(stack_a,1);
	while (i--)
	{
		printf("%d",stack_a->index);
		stack_a = stack_a->next;
	}
	
	write_terminal(stack_a, stack_b);
}