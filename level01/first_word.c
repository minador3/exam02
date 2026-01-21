#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// while == ' ' || == '/t', i++; skip the space OR tabs
// while av[1][i] && != ' ' && != '/t', before reaching the end of code, and doesnt equal to space AND tabs