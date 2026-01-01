#include "push_swap.h"

void k_sort(t_stack **stack_a, t_stack **stack_b, int length)
{
  int i;
  int range;

  i = 0;

  if(length <= 100)
    range = 15;
  else 
  range = 35;
  while (*stack_a)
  {
    if((*stack_a)->index <= i)
    {
      pb(stack_a, stack_b);
      rb(stack_b);
      i++;
    }
    else if ((*stack_a)->index <= i + range)
    {
        pb(stack_a, stack_b);
        i++;
    }
    else
        ra(stack_a);
  }
}

void k_sort_2(t_stack **a, t_stack **b, int size)
{
	int	target;

	target = size - 1;
	while (*b)
	{
		if (get_distance(*b, target) <= stack_size(*b) / 2)
		{
			while ((*b)->index != target)
				rb(b);
		}
		else
		{
			while ((*b)->index != target)
				rrb(b);
		}
		pa(a, b);
		target--;
	}
}
void	large_sort(t_stack **a, t_stack **b, int size)
{
	k_sort(a, b, size);
	k_sort_2(a, b, size);
}