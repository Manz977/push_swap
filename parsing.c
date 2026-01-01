#include "push_swap.h"

char	**parse_arguments(int argc, char **argv)
{
	char	**args;

	if (argc == 2)
		args = split(argv[1], ' ');
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
		num[i] = ft_atol(args[i]);
		i++;
	}
	return (num);
}