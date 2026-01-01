
#include "push_swap.h"

void sort_int_array(int *array, int size)
{
  int i;
  int j;
  int temp;

  i = 0;
  while (i < size -1)
  {
    j = i + 1;
    while (j < size)
    {
      if (array[i] > array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
      j++;
    }
    i++;
  }
}

void	assign_index(t_stack **stack, int stack_size)
{
	t_stack	*curr;
	int		*tmp;
	int		i;

	if (!(tmp = malloc(sizeof(int) * stack_size)))
		return ;
	curr = *stack;
	i = 0;
	while (curr && i < stack_size)
	{
		tmp[i++] = curr->value;
		curr = curr->next;
	}
	sort_int_array(tmp, stack_size);
	curr = *stack;
	while (curr)
	{
		i = -1;
		while (++i < stack_size)
			if (curr->value == tmp[i])
				curr->index = i;
		curr = curr->next;
	}
	free(tmp);
}

