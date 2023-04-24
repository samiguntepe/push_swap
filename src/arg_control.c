/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:34:59 by sguntepe          #+#    #+#             */
/*   Updated: 2023/04/24 14:01:11 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_control(char **argv)
{
	is_integer(argv);
	overflow_int(argv);
	is_duplicate(argv[1]);
}

void	is_duplicate(char *arg)
{
	int i;
	// int j;

	i = 0;
		printf("%s\n",arg);
	while (arg[i])
	{
		// if(arg[i+1] != '\0')
		// 	j = i+1;

		// while (arg[j])
		// {
		// 	// if(arg[i] != arg[j])
		// 	// {
		// 	// 	write(1,"Error\n",6);
		// 	// 	write(1," duplicate",10);
		// 	// 	exit(0);	
		// 	// }
			
		// 	j++;
		// }
		i++;
	}
}

int	is_number(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if(arg[0] == '-' || arg[0] == '+')
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
	int answer;

	i = 1;
	while (argv[i])
	{
		answer = is_number(argv[i]);
		if(answer != 1)
		{
			write(1,"Error\n",6);
			exit(0);
		}
		i++;
	}
}

void	overflow_int(char **argv)
{
	int	i;
	long num;

	i = 1;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		if(num > 2147483647 || num < -2147483648)
		{
			write(1,"Error\n",6);
			exit(0);
		}
		i++;
	}
}

long	ft_atol(const char *str)
{
	long	d;
	long	s;

	d = 1;
	s = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
			str++;
	if (*str == '-')
	{
		d = d * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '-' || *str == '+')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		s = (s * 10);
		s = s + (*str - '0');
		str++;
	}
	return (s * d);
}