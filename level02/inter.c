#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int	seen_before;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			// Step 1: Check if the current char was already seen in the first string
			j = 0;
			seen_before = 0;
			while (j < i)
			{
				if (argv[1][j] == argv[1][i])
				{
					seen_before = 1;
					break ;
				}
				j++;
			}
			// Step 2: If not seen before, check if it exists in the second string
			if (seen_before == 0)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[2][j] == argv[1][i])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
