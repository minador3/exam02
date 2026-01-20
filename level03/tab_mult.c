#include <unistd.h>

// Helper to convert string to int
int		ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

// Helper to print a number
void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int	num;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	num = ft_atoi(argv[1]);
	i = 1;
	while (i <= 9)
	{
		// Format: "i x num = result"
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(i * num);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}