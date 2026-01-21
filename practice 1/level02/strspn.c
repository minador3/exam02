#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i]) //loop through the main str
	{
		j = 0;
		while (accept[j])// check if current s[i] exists in accept
		{
			if (s[i] == accept[j])
				break ; // found a match, stop looking 
			j++;
		}
		if (!accept[j]) // we reach the end of accept and no match found;
			return (i); // stop and return the current count;
		i++;
	}
	return (i);
}