/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:12:55 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/22 21:20:48 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "libft.h"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_node;


/*Error handling and input check utils*/
int		ft_error(int e);
int		is_digit(char c);
int		is_sign(char c);
long	ft_atoi(const char *str);
int		nbr_cmp(const char *s1, const char *s2);
int		arg_is_number(char *argv);
int		arg_is_duplicate(char **argv);
int		is_correct_input(char **av);


#endif
