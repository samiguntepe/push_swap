/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:25:03 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/07 14:45:12 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	main(int argc,char **argv)
{
	(void)argc;
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	
	if (argc < 2)
		exit(0);
	arg_control(argv);
	push_numbers(argv,stack_a);
	
	printf("\n");

	int i = 1;
	while(stack_a->next != NULL)
	{
		if(stack_b->next != NULL)
			printf("%d",stack_a->next->data);
		else
			printf("%d\n",stack_a->next->data);
		i = 1;
		while(i > 0 && stack_b->next != NULL)
		{
			printf("   %d\n",stack_b->next->data);
			stack_b = stack_b->next;
			i--;
		}
		stack_a = stack_a->next;
	}
	if(stack_b->next != NULL)
		printf("\n-   -\nA   B\n");
	else
		printf("-   -\nA   B\n");
	
	
	
	return (0);
}