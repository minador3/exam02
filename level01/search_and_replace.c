#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	char search;
	char replace;

	i = 0;
	if (ac == 4)
	{
		if (av[2][i] || av[3][i])
		{
			write(1, "\n", 1);
			return (0);
		}
		search = av[2][0];
		replace = av[3][0];
		while (av[1][i])
		{
			if (av[1][i] == search)
				write(1, &replace, 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
