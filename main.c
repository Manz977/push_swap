/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:15:49 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/23 17:25:55 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char	**parse_arguments(int argc, char **argv)
{
	char	**args;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = &argv[1];
	return (args);
}

int	*proc_val(char **args, int *size)
{
	int	*num;
	int	i;

	if (!args || is_correct_input(args) == 0)
		ft_error(1);
	i = 0;
	while (args[i])
		i++;
	*size = i;
	num = malloc(sizeof(int) * i);
	if (!num)
		ft_error (1);
	i = 0;
	while (args[i])
	{
		num[i] = ft_atoi(args[i]);
		i++;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	char	**args;
	int		*num;
	int		size;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_error(1));
	if ((is_correct_input(argv)) == 0)
	if (argc < 2)

		return (ft_error(1));
	args = parse_arguments(argc, argv);
	num = proc_val(args, &size);
	(void)num;
	(void)size;
	return (0);

}
