#include "push_swap.h"

t_stack *get_last_stack(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

static void reverse_r(t_stack **stack)
{
    t_stack *last;
    t_stack *second_to_last;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
  {
    return ;
  }

  last = get_last_stack(*stack);
  second_to_last = last->prev;

  second_to_last->next = NULL;

  last->next = *stack;
  last->prev = NULL;
  (*stack)->prev = last;

  *stack = last;
}

void rra(t_stack **stack_a)
{
  reverse_r(stack_a);
  ft_putstr_fd("rra\n", 1);  
}
void rrb(t_stack **stack_b)
{
  reverse_r(stack_b);
  ft_putstr_fd("rrb\n", 1);  
}
void rrr(t_stack **stack_a, t_stack **stack_b)
{
  reverse_r(stack_a);
  reverse_r(stack_b);
  ft_putstr_fd("rrr\n", 1);  
}