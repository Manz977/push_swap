/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:10:47 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/17 18:30:00 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_error(int e)
{
	if (e == 1)
		write(2, "Error\n", 6);
	return (1);
}
/*Is digit*/

int	is_digit(int c)
{
	return (c >= '1' && c <= '9');
}


/*Is sign*/

int	is_sign(int c)
{
	return (c == '+' || c == '-');
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

