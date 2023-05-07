/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:25:07 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/06 22:38:34 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../include/libft/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

t_stack	*push(t_stack *root, int num);
int		pop(t_stack *root);
int		top(t_stack *root);
int		first_pop(t_stack *root);
int		is_number(char *arg);
void	is_integer(char **argv);
void	arg_control(char **argv);
void	overflow_int(char **argv);
void	push_numbers(char **argv, t_stack *root);
long	ft_atol(const char *str);
void	is_duplicate(char **argv);
int		*all_num(char **argv);
int 	ft_intlen(int *nums);

// Rules
void	swap_data(t_stack *first, t_stack *second, t_stack *a);
void	sa(t_stack *a);
void	pb(t_stack *a, t_stack *b);

# endif