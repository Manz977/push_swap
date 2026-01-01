/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manarmonzer <manarmonzer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:32:33 by mamonzer          #+#    #+#             */
/*   Updated: 2026/01/01 20:40:33 by manarmonzer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_is_number(char *argv)
{
	int	i;

	if (!argv || !argv[0])
		return (0);

	i = 0;
	if (is_sign(argv[i]) && (argv[i + 1] != '\0'))
		i++;
	while (argv[i] && ft_isdigit(argv[i]))
		i++;
	if (argv[i] != '\0' && !ft_isdigit(argv[i]))
		return (0);
	return (1);
}

int arg_is_duplicate(char **av)
{
    int i;
    int j;

    i = 0;
    while (av[i])
    {
        j = i + 1;
        while (av[j])
        {
            if (ft_atol(av[i]) == ft_atol(av[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int	arg_is_zero(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]))
		i++;
	while (av[i] == '0')
	{
		i++;
	}
	if (av[i] == '\0')
		return (1);
	return (0);
}

int is_correct_input(char **av)
{
	int		i;
	long	tmp;  
	int		zeros;

	i = 0;
	zeros = 0;
	while (av[i])
	{
		if (!arg_is_number(av[i]))
			return (0);
		
		tmp = ft_atol(av[i]);
		if (tmp > 2147483647 || tmp < -2147483648)
			return (0);

		if (arg_is_zero(av[i]))
			zeros++;
		i++;
	}
	if (zeros > 1)
		return (0);
	if (arg_is_duplicate(av))
		return (0);
	return (1);
}
