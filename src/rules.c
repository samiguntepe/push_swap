/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:50:56 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/09 19:31:52 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_data(t_stack *first, t_stack *second, t_stack *a)
{
	int	temp;

	if (a == NULL || a->next == NULL)
		return ;
	temp = first->data;
	first->data = second->data;
	second->data = temp;
}

void	sa(t_stack *a, int tf)
{
	if (a->next != NULL && a->next->next != NULL)
		swap_data(a->next, a->next->next, a);
	if(tf == 1)
		printf("sa\n");
}

void	sb(t_stack *b, int tf)
{
	if (b->next != NULL && b->next->next != NULL)
		swap_data(b->next, b->next->next, b);
	if(tf == 1)
		printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	printf("ss\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->next == NULL)
		return ;
	int popped;

	popped = first_pop(a);
	push_first(b,popped);
	printf("pb\n");
}
