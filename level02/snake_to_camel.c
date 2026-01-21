#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i]) // loop through av[1][i]
		{
			if (av[1][i] == '_') 
			{
				i++;
				c = av[1][i];
				if (c >= 'a' && c <= 'z')
				{
					c -= 32;
					write(1, &c, 1);
					i++;
				}
			}
			else
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

// snake to camel 
// loop through av[1][i]
// if av[1][i] == '_", 
// i++, 
// if av[1][i] is lower case 
// av[1][i] -= 32; write &c, i++
// else write &av[1][i], i++;
// write newline 
