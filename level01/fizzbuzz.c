#include <unistd.h>

void	put_number(int n)
{
	char	c;

	if (n >= 10)
		put_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (1 % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			put_number(i);
		write(1, "\n", 1);
		i++;
	}
}

// void putnbr (int n)
// if n >= 10 -> putnbr(n / 10)
// char c = (n % 10) + '0'
// write(1, &c, 1);