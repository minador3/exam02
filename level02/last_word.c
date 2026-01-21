#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int start;
	int end;

	if (ac == 2)
	{
		i = 0;
		// 1. Go to the end of the string
		while (av[1][i])
			i++;
		i--;

		// 2. Skip spaces/tabs backwards from the end
		while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;

		// This is the end of the word
		end = i;

		// 3. Move backwards until we hit a space or start of string
		while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
			i--;

		// The word starts at i + 1
		start = i + 1;

		// 4. Print the word
		while (start <= end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
//go to the end of av[1][i], i++;
//i--;
//skip space or tabs backwards from the end (i>=0, av[1][i] == ' ' || '\t')
//i--;
//end = i; this is the end of the word 
//move backwards until we hit space AND tab or start of the str (while i>=0 && av[1][i] != ' ' && '\t' )
// 