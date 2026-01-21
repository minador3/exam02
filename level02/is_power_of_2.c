int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			return (0);
		n /= 2;
	}
	return (1);
}

// if n == 0 ret 0;
// while n > 1
// if (n % 2 == 0)
// ret 0;
// n /= 2;
// ret 1