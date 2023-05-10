#include "push_swap.h"

void    write_terminal(t_stack *a, t_stack *b)
{   
    printf("\n");
    while (a->next != NULL)
	{
		a = a->next;
		printf("   %d\n",a->data);
	}
	printf("   -\n   A\n");
	printf("  \033[32m---\033[0m\n");
	while (b->next != NULL)
	{
		b = b->next;
		printf("   %d\n",b->data);
	}
	if(b->data != 0)
		printf("   -\n   B\n");
}