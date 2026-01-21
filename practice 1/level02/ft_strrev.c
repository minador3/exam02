char	*ft_strrev(char *str)
{
	int		i;
	int		last;
	char	temp;

	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	i = 0;
	while (i < last)
	{
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;
		i++;
		last--;
	}
	return (str);
}
