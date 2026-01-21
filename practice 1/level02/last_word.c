#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	end;
	int	start;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
			i--;
		start = i + 1;
		while (start <= end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
