#include <unistd.h>

// 1. Helper to convert String to Integer
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

// 2. Helper to print recursively in Base 16
void	print_hex(int n)
{
	char	*hex_digits;
	char	c;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	
	c = hex_digits[n % 16];
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}