int	is_sign(char c)
{
	return (c == '+' || c == '-');
}
int	ft_space(int s)
{
	if (s == 9 || s == 10 || s == 11 || s == 12 || s == 13 || s == 32)
		return (1);
	return (0);
}
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}