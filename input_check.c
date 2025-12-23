/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:32:33 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/22 22:33:16 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/* arg_is_number:
*   Checks if the argument is a number. +1 1 and -1 are all valid numbers.
*   Return: 1 if the argument is a number, 0 if not.
*/

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	arg_is_number(char *argv)
{
	int	i;

	i = 0;

	if (is_sign(argv[i]) && (argv[i + 1] != '\0'))
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] != '\0' && !is_digit(argv[i]))
		return (0);
	return (1);
}


/* have_duplicates:
*   Checks if the argument list has duplicate numbers.
*   Return: 1 if a duplicate is found, 0 if there are none.
*/

int	arg_is_duplicate(char **argv)
{
	int	i;
	int	j;

	i = 1;

	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (nbr_cmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/* arg_is_zero:
*   Checks the argument is a 0 to avoid 0 +0 -0 duplicates
*	and 0 0000 +000 -00000000 too.
*   Return: 1 if the argument is a zero, 0 if it contains
*	anything else than a zero.
*/


/* is_correct_input:
*   Checks if the given arguments are all numbers, without duplicates.
*   Return: 1 if the arguments are valid, 0 if not.
*/

int	is_correct_input(char **av)
{
	int	i;

	i = 1;

	while (av[i])
	{
		if (!arg_is_number(av[i]))
			return (0);
			i++;
	}
	if (arg_is_duplicate(av))
		return (0);
	return (1);
}
