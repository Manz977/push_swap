

#include "push_swap.h"

static void push(t_stack **dest, t_stack **src)
{
  t_stack *tmp;

  if(*src == NULL)
    return ;
  tmp = *src; 

  *src = (*src)->next;
  if(*src != NULL)
    (*src)->prev = NULL;

  tmp->next = (*dest);
  tmp->prev = NULL;
  if(*dest != NULL)
    (*dest)->prev = tmp;

  (*dest) = tmp;
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
  push(stack_a, stack_b);
  ft_putstr_fd("pa\n", 1);  
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
  push(stack_b, stack_a);
  ft_putstr_fd("pb\n", 1);  
}