/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:19:04 by mamonzer          #+#    #+#             */
/*   Updated: 2025/12/19 19:34:08 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(const char *s, char c);
void	ft_initiate_v(int *i, int *j, int *start);
void	ft_free(char **str);

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	ft_initiate_v(&i, &j, &start);
	res = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while ((s[i] != '\0') && (s[i] == c))
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = ft_substr(s, start, i - start);
		if (!res[j])
			return (ft_free(res), NULL);
		j++;
	}
	return (res[j] = NULL, res);
}

void	ft_initiate_v(int *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

// int	main(void)
//{
//	char **result;
//	char *str = "Hello world this is C";
//	char delimiter = ' ';
//	int i = 0;

//	result = ft_split(str, delimiter);
//	if (!result)
//	{
//		printf("Error: ft_split returned NULL\n");
//		return (1);
//	}

//	printf("Original string: \"%s\"\n", str);
//	printf("Split by '%c':\n", delimiter);

//	while (result[i])
//	{
//		printf("Word %d: %s\n", i + 1, result[i]);
//		i++;
//	}

//	// Free allocated memory
//	ft_free(result);

//	return (0);
//}
