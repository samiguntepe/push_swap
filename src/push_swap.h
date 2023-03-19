# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../include/libft/libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	ft_push(t_stack *x,int num);

# endif