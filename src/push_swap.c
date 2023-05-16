/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:25:03 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/16 14:13:07 by sguntepe         ###   ########.fr       */
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
	assign_tags(stack_a,argc);
	// is_sorted(stack_a);
	radix(stack_a,stack_b);
	
	
	
}