/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:25:03 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/08 11:53:57 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	main(int argc,char **argv)
{
	(void)argc;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack *root_a;
	t_stack *root_b;
	
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	
	if (argc < 2)
		exit(0);
	arg_control(argv);
	push_numbers(argv,stack_a);
	
	printf("\n");

	// int i = 1;
	// while(stack_a->next != NULL)
	// {
	// 	if(stack_b->next != NULL)
	// 		printf("%d",stack_a->next->data);
	// 	else
	// 		printf("%d\n",stack_a->next->data);
	// 	i = 1;
	// 	while(i > 0 && stack_b->next != NULL)
	// 	{
	// 		printf("   %d\n",stack_b->next->data);
	// 		stack_b = stack_b->next;
	// 		i--;
	// 	}
	// 	stack_a = stack_a->next;
	// }
	// if(stack_b->next != NULL)
	// 	printf("\n-   -\nA   B\n");
	// else
	// 	printf("-   -\nA   B\n");
	root_a = stack_a;
	int a = 0;
	int b = 0;
	int sabit;
	int count = 0;
	while (stack_a->next != NULL)
	{
		a++;
		stack_a = stack_a->next;
	}
	root_b = stack_b;
	while (stack_b->next != NULL)
	{
		b++;
		stack_b = stack_b->next;
	}
	stack_a = root_a;
	sabit = a;
	while (root_a->next != NULL)
	{
		stack_a = root_a;
		a = (sabit-count);
		while(stack_a->next != NULL && a > 0)
		{
			stack_a = stack_a->next;
			count++;
			a--;
		}
		printf("%d\n",stack_a->data)
		root_a = root_a->next;
	}
	
	
	
	
	
	return (0);
}