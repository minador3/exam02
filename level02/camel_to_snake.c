#include <stdlib.h>

int	main(int ac, char **av)
{
	int		i;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i]) // loop through av[1][i]
		{
			c = av[1][i];
			if (c >= 'A' && c <= 'Z') // if is uppercase, write _ and c += 32, otherwise write &c
			{
				write(1, "_", 1);
				c += 32;
			}
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
// camel to snake 
// uppercase become lowercase and preceded by underscore