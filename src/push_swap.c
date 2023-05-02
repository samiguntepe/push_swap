/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:25:03 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/02 14:44:02 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	main(int argc,char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	
	if (argc < 2)
		exit(0);

	arg_control(argv);
	push_numbers(argv,stack_a);
	printf("\n");
	sa(stack_a);
	while (stack_a->next != NULL)
	{
		if(stack_a->data != 0)
			printf("%d",stack_a->data);
		
		if(stack_b->data != 0 && stack_a->data != 0)
			printf("  %d\n",stack_b->data);
		else if(stack_b->data == 0 && stack_a->data != 0)
			printf("    \n");
		stack_a = stack_a->next;
	}
	printf("%d\n",stack_a->data);
		printf("-   -\nA   B\n\n");

	
	
	return (0);
}