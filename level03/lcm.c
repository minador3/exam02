unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	// 1. Check for 0 input
	if (a == 0 || b == 0)
		return (0);

	// 2. Start checking from the larger of the two numbers
	if (a > b)
		n = a;
	else
		n = b;

	// 3. Loop until we find a number divisible by both
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}