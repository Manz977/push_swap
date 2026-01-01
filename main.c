/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manarmonzer <manarmonzer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:15:49 by mamonzer          #+#    #+#             */
/*   Updated: 2026/01/01 18:15:53 by manarmonzer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	if(!stack)
	return (1);
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
void init_stack(t_stack **stack_a, int *num, int size)
{
    t_stack *new_node;
    int     i;

    i = 0;
    while (i < size)
    {
        new_node = stack_new(num[i]);
        if (!new_node)
        { 
            ft_error(1);
        }
        stack_add_back(stack_a, new_node);
        i++;
    }
}
void	push_swap(t_stack **stack_a, t_stack **stack_b, int size)
{
	if (!stack_a || !*stack_a || is_sorted(*stack_a))
		return ;
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size <= 5)
		sort_five(stack_a, stack_b);
	else
		large_sort(stack_a, stack_b, size);
}
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*num;
	int		size;

	if (argc < 2)
		return (0);
	if (!is_correct_input(argv))
		return (ft_error(1));
	num = proc_val(parse_arguments(argc, argv), &size);
	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, num, size);
	free(num);
	assign_index(&stack_a, size);
	
	push_swap(&stack_a, &stack_b, size);

	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
