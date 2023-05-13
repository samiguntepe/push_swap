#include "push_swap.h"

void    put_index(t_stack *root)
{
    int i;

    i = 0;
    while (root->next != NULL)
    {
        root->index = i;
        i++;
        root = root->next;
    }
}