int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int val;

	if (!str || str_base < 2 || str_base > 16)
		return (0);

	// Handle optional leading minus
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i])
	{
		// Convert character to integer value
		if (str[i] >= '0' && str[i] <= '9')
			val = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			val = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			val = str[i] - 'A' + 10;
		else
			break; // invalid character

		// Only accept digits within the base
		if (val >= str_base)
			break;

		result = result * str_base + val;
		i++;
	}

	return (result * sign);
}
