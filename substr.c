#include "push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = malloc(count * size);
	if (temp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
	free(temp);
	temp = NULL;
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*ss;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_calloc(1, sizeof(char)));
	if (len > len_s - start)
		len = len_s - start;
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}