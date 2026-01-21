#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		nbr1;
	int		nbr2;
	char	operator;

	if (ac == 4)
	{
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[3]);
		operator= av[2][0];
		if (operator== '+')
			printf("%d\n", nbr1 + nbr2);
		else if (operator== '-')
			printf("%d\n", nbr1 - nbr2);
		else if (operator== '*')
			printf("%d\n", nbr1 * nbr2);
		else if (operator== '/')
			printf("%d\n", nbr1 / nbr2);
		else if (operator== '%')
			printf("%d\n", nbr1 % nbr2);
		else
			printf("\n");
	}
	else
		printf("\n");
	return (0);
}

// ac == 4 ELSE print newline char
// atoi(av[1]), atoi(av[3])
// op = av[2][0]
// if +, else if -, else if *, else if /, else if %
