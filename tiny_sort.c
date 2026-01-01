#include "push_swap.h"

void sort_two(t_stack **stack_a)
{
  if(!stack_a)
  return ;

  if(stack_size(*stack_a) == 2)
  {
    if((*stack_a)->value > (*stack_a)->next->value)
    {
      sa(stack_a);
    }
  }
}

void sort_three(t_stack **stack_a)
{
  int first;
  int second;
  int third;

  if (!stack_a || !*stack_a || !(*stack_a)->next)
  return ;
  first = (*stack_a)->index;
  second = (*stack_a)->next->index;
  third = (*stack_a)->next->next->index;
  if (first > second && second < third && first < third)
  sa(stack_a);
  else if (first > second && second > third)
  {
    sa(stack_a);
    rra(stack_a);
  }
  else if (first > second && second < third && first > third)
        ra(stack_a);
    else if (first < second && second > third && first < third)
    {
        sa(stack_a);
        ra(stack_a);
    }
    else if (first < second && second > third && first > third)
        rra(stack_a);
}

int	get_distance(t_stack *stack, int index)
{
	int	dist;

	dist = 0;
	while (stack)
	{
		if (stack->index == index)
			break ;
		dist++;
		stack = stack->next;
	}
	return (dist);
}
void	sort_five(t_stack **a, t_stack **b)
{
	int	len;
	int	min_idx;

	min_idx = 0;
	while (stack_size(*a) > 3)
	{
		len = stack_size(*a);
		if (get_distance(*a, min_idx) <= len / 2)
		{
			while ((*a)->index != min_idx)
				ra(a);
		}
		else
		{
			while ((*a)->index != min_idx)
				rra(a);
		}
		if (is_sorted(*a))
			break ;
		pb(a, b);
		min_idx++;
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
