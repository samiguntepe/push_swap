/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:34:59 by sguntepe          #+#    #+#             */
/*   Updated: 2023/05/16 13:34:54 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_control(char **argv)
{
	is_integer(argv);
	overflow_int(argv);
	is_duplicate(argv);
}

int	*all_num(char **argv)
{
	int		i;
	int		j;
	int		*nums;

	i = 0;
	while (argv[i])
		i++;
	i--;
	nums = malloc(sizeof(int) * i + 1);
	i = 1;
	j = 0;
	while (argv[i])
	{
		nums[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	nums[j] = '\0';
	return (nums);
}

int	is_number(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[0] == '-' || arg[0] == '+')
			i++;
		else if (arg[i] >= '0' && arg[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

void	is_integer(char **argv)
{
	int	i;
	int	answer;

	i = 1;
	while (argv[i])
	{
		answer = is_number(argv[i]);
		if (answer != 1)
		{
			write (1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

void	overflow_int(char **argv)
{
	int		i;
	long	num;

	i = 1;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}
