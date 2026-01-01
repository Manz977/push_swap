/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manarmonzer <manarmonzer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:15:49 by mamonzer          #+#    #+#             */
/*   Updated: 2026/01/01 20:07:32 by manarmonzer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_args(char **args)
{
    int i = 0;
    while (args[i])
        free(args[i++]);
    free(args);
}
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
int main(int argc, char **argv)
{
	t_stack	*a = NULL;
	t_stack	*b = NULL;
	char	**args;
	int		*num;
	int		size;

	if (argc < 2)
		return (0);
	args = (argc == 2) ? split(argv[1], ' ') : (argv + 1);
	if (!args || !is_correct_input(args))
	{
		if (argc == 2)
			free_args(args);
		return (ft_error(1));
	}
	num = proc_val(args, &size);
	init_stack(&a, num, size);
	free(num);
	assign_index(&a, size);
	push_swap(&a, &b, size);
	if (argc == 2)
		free_args(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
