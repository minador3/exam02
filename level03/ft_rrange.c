#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*range;
	int		i;
	int		len;

	// 1. Calculate the length of the array
	// If end is greater (e.g. start 1, end 3), len is 3 - 1 + 1 = 3
	// If start is greater (e.g. start 0, end -3), len is 0 - (-3) + 1 = 4
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;

	// 2. Allocate memory
	range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (NULL);

	// 3. Fill the array
	// The subject says: "begin at end and end at start"
	i = 0;
	while (i < len)
	{
		if (end >= start)
		{
			// Example (1, 3) -> want 3, 2, 1
			// We start at 'end' and decrease
			range[i] = end - i;
		}
		else
		{
			// Example (0, -3) -> want -3, -2, -1, 0
			// We start at 'end' and increase
			range[i] = end + i;
		}
		i++;
	}

	return (range);
}