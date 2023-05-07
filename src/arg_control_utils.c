/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_control_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:36:50 by sguntepe          #+#    #+#             */
/*   Updated: 2023/04/27 17:09:33 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_duplicate(char **argv)
{
	int i;
	int j;
	int count;
	int *nums;

	i = 0;
	j = 0;
	nums = all_num(argv);
	while(nums[i])
	{
		count = 0;
		j = 0;
		while(nums[j])
		{
			if(nums[i] == nums[j])
				count++;
			j++;
		}
		i++;
	if(count >= 2)
	{
		write (1, "Error\n", 6);
		free(nums);
		exit(0);
	}
	}
}