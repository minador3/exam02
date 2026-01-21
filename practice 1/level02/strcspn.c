#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i]) //loop through the main str
	{
		j = 0;
		while (reject[j]) //check if the current s[i] exists in reject
		{
			if (s[i] == reject[j])
				return (i); // found a reject char, ret the count
			j++;
		}
		i++;
	}
	return (i);
}
