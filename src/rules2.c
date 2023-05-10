#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (b->next == NULL)
		return ;
	int popped;

	popped = first_pop(b);
	push_first(a,popped);
	printf("pa\n");
}

void    ra(t_stack *root, int tf)
{
    t_stack *temp;
    t_stack *iter;

    temp = (t_stack *)malloc(sizeof(t_stack));
    temp->data = root->next->data;
    temp->next = NULL;
    iter = root->next->next;
    free(root->next);
    root->next = iter;
    while (iter->next != NULL)
        iter = iter->next;
    iter->next = temp;
    if(tf == 1)
        printf("ra\n");
}

void    rb(t_stack *root, int tf)
{
    t_stack *temp;
    t_stack *iter;

    temp = (t_stack *)malloc(sizeof(t_stack));
    temp->data = root->next->data;
    temp->next = NULL;
    iter = root->next->next;
    free(root->next);
    root->next = iter;
    while (iter->next != NULL)
        iter = iter->next;
    iter->next = temp;
    if(tf == 1)
        printf("rb\n");
}

void    rr(t_stack *a, t_stack *b)
{
    ra(a, 0);
    rb(b, 0);
    printf("rr\n");
}