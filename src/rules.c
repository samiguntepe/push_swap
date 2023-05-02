/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:50:56 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/02 15:52:41 by sguntepe         ###   ########.fr       */
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

void	sa(t_stack *a)
{
	if (a->next != NULL && a->next->next != NULL)
		swap_data(a->next, a->next->next, a);
	printf("sa\n");
}
