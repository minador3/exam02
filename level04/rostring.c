#include <unistd.h>
#include <stdlib.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int		main(int argc, char **argv)
{
	int		i;
	int		start_first;
	int		end_first;
	int		flag;

	if (argc > 1 && argv[1][0])
	{
		i = 0;
		// 1. Skip leading whitespace to find the start of the first word
		while (is_space(argv[1][i]))
			i++;
		start_first = i;

		// 2. Find the end of the first word
		while (argv[1][i] && !is_space(argv[1][i]))
			i++;
		end_first = i;

		// 3. Skip spaces after the first word to see if there are other words
		while (is_space(argv[1][i]))
			i++;

		// 4. Print the remaining words (Word 2 to Word N)
		flag = 0;
		while (argv[1][i])
		{
			if (flag == 1)
				write(1, " ", 1); // Print space between words
			flag = 1; // Mark that we have printed at least one word from the "rest"

			// Print the current word
			while (argv[1][i] && !is_space(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			// Skip spaces to get to the next word
			while (is_space(argv[1][i]))
				i++;
		}

		// 5. Print the first word at the end
		// Only if we actually found a first word (start < end)
		if (start_first < end_first)
		{
			// If we printed other words before, we need a separator space
			if (flag == 1)
				write(1, " ", 1);
			
			// Write the first word
			while (start_first < end_first)
			{
				write(1, &argv[1][start_first], 1);
				start_first++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}