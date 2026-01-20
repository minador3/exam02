#include <unistd.h>

int	main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
		while (*av[1])
		{
			if (*av[1] >= 'a' && *av[1] <= 'z')
				repeat = *av[1] - 'a' + 1;
			else if (*av[1] >= 'A' && *av[1] <= 'Z')
				repeat = *av[1] - 'A' + 1;
			else
				repeat = 1;
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	write(1, "\repeat", 1);
	return (0);
}

int	main(int ac, char **av)
{
	int	repeat;
	int	i;

	if (ac == 2)
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat = av[1][i] - 'a' + 1;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat = av[1][i] - 'A' + 1;
			else
				repeat = 1;
			while (repeat--)
				write(1, &av[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
