#include "push_swap.h"

int ft_intlen(int *nums)
{
    int i;

    i = 0;
    while (nums[i])
        i++;
    return (i);
}