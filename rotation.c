#include "push_swap.h"

void rotate(t_stack **stack)
{
  t_stack *old_head;
  t_stack *last;

  if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
  {
    return ;
  }

  old_head = *stack;

  *stack = (*stack)->next;

  last = get_last_stack(*stack);

  (*stack)->prev = NULL;

  last->next = old_head;
  old_head->prev = last;
  old_head->next = NULL;
}
void ra(t_stack **stack_a)
{
  rotate(stack_a);
  ft_putstr_fd("ra\n", 1);  
}
void rb(t_stack **stack_b)
{
  rotate(stack_b);
  ft_putstr_fd("rb\n", 1);  
}
void rr(t_stack **stack_a, t_stack **stack_b)
{
  rotate(stack_a);
  rotate(stack_b);
  ft_putstr_fd("rr\n", 1);  
}