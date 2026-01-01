/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manarmonzer <manarmonzer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:12:55 by mamonzer          #+#    #+#             */
/*   Updated: 2026/01/01 18:55:43 by manarmonzer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "libft.h"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;


/*===Error handling and input check utils===*/
int		ft_error(int e);
int		is_sign(char c);
long	ft_atoi(char *str);
int		nbr_cmp(const char *s1, const char *s2);
int		arg_is_number(char *argv);
int		arg_is_duplicate(char **argv);
int		is_correct_input(char **av);
void	free_stack(t_stack **stack);
void	ft_putstr_fd(char *s, int fd);
int		ft_isdigit(int c);
int		ft_space(int s);
char	*ft_substr(const char *s, unsigned int start, size_t len);

/*===Helper functions for linked list===*/
int	stack_size(t_stack *lst);
t_stack	*stack_new(int value);
void	stack_add_back(t_stack **lst, t_stack *new);
t_stack *get_last_stack(t_stack *stack);

/*===Parsing===*/
char	**split(const char *s, char c);
char	**parse_arguments(int argc, char **argv);
int	*proc_val(char **args, int *size);

/*===Indexing===*/
void sort_int_array(int *array, int size);
void	assign_index(t_stack **stack, int stack_size);

/*==operations===*/
// Push
void push(t_stack **dest, t_stack **src);
void pa(t_stack **stack_a, t_stack **stack_b);
void pb(t_stack **stack_a, t_stack **stack_b);
/*==reverse rotate==*/
void reverse_r(t_stack **stack);
void rra(t_stack **stack_a);
void rrb(t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);
/*==Rotate==*/
void rotate(t_stack **stack);
void ra(t_stack **stack_a);
void rb(t_stack **stack_b);
void rr(t_stack **stack_a, t_stack **stack_b);
/*==Swap==*/
void swap(t_stack *stack);
void sa(t_stack **stack_a);
void sb(t_stack **stack_b);
void ss(t_stack **stack_a,t_stack **stack_b);

/*===Tiny Sort===*/
void sort_two(t_stack **stack_a);
void sort_three(t_stack **stack_a);
int	get_distance(t_stack *stack, int index);
void	sort_five(t_stack **a, t_stack **b);
/*===Large Sort===*/
void k_sort(t_stack **stack_a, t_stack **stack_b, int length);
void k_sort_2(t_stack **a, t_stack **b, int size);
void	large_sort(t_stack **a, t_stack **b, int size);
int	is_sorted(t_stack *stack);

#endif
