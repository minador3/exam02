#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*str;

	// Use long to handle INT_MIN (-2147483648) safely
	n = nbr;
	len = 0;

	// 1. Calculate Length
	if (n <= 0)
		len++; // Space for '-' or '0'
	
	long temp = n;
	if (temp < 0)
		temp = -temp;
	
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}

	// 2. Allocate Memory
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	// 3. Null-terminate
	str[len] = '\0';

	// 4. Handle 0 special case
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	// 5. Handle Negatives
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}

	// 6. Fill string backwards
	while (n > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
	}

	return (str);
}