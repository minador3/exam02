#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*tab;
	int		len;
	int		i;

	// 1. Calculate the length of the array
	// If the range is increasing (e.g., 1 to 3), len is end - start + 1
	// If the range is decreasing (e.g., 3 to 1), len is start - end + 1
	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;

	// 2. Allocate memory
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);

	// 3. Fill the array
	i = 0;
	while (i < len)
	{
		if (start <= end)
			tab[i] = start + i;
		else
			tab[i] = start - i;
		i++;
	}

	return (tab);
}