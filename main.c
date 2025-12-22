/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:15:49 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/22 22:38:31 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_error(1));
	if (is_correct_input(argv) == 0)
		return (ft_error(1));

}
