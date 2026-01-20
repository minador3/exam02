#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int last;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		last = i - 1;
		while (last >= 0)
		{
			write(1, &av[1][last], 1);
			last--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
