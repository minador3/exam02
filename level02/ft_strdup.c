#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// get the length of the str
// dup = malloc 
// while str[1]
// dup[i] = str[i]
// dup[i]= '\0'
// ret dup