/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:10:47 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/22 21:16:45 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_error(int e)
{
	if (e == 1)
		write(2, "Error\n", 6);
	exit (1);
}

int	ft_space(int s)
{
	if (s == 9 || s == 10 || s == 11 || s == 12 || s == 13 || s == 32)
		return (1);
	return (0);
}

long	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	np;

	i = 0;
	j = 0;
	np = 1;
	while (ft_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			np = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (j * np);
}
/*nbrstr compare if the numbers are duplicate*/

int	nbr_cmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = i;

	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}


