/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:12:55 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/23 15:46:42 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "libft.h"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;


/*Error handling and input check utils*/
int		ft_error(int e);
int		is_sign(char c);
long	ft_atoi(char *str);
int		nbr_cmp(const char *s1, const char *s2);
int		arg_is_number(char *argv);
int		arg_is_duplicate(char **argv);
int		is_correct_input(char **av);


#endif
