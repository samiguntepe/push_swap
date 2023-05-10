#include "push_swap.h"

void    rra(t_stack *root, int tf)
{
    t_stack *iter;
    t_stack *temp;

    temp = (t_stack *)malloc(sizeof(t_stack));
    iter = root;
    while (iter->next->next != NULL)
        iter = iter->next;
    
    temp->data = iter->next->data;
    temp->next = root->next;
    root->next = temp;
    free(iter->next);
    iter->next = NULL;
    if(tf == 1)
        printf("rra\n");
}

void    rrb(t_stack *root, int tf)
{
    t_stack *iter;
    t_stack *temp;

    temp = (t_stack *)malloc(sizeof(t_stack));
    iter = root;
    while (iter->next->next != NULL)
        iter = iter->next;
    
    temp->data = iter->next->data;
    temp->next = root->next;
    root->next = temp;
    free(iter->next);
    iter->next = NULL;
    if(tf == 1)
        printf("rrb\n");
}

void    rrr(t_stack *a, t_stack *b)
{
    rra(a,0);
    rrb(b,0);
    printf("rrr\n");
}