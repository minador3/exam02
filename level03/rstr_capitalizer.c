#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		// 1. If it's an uppercase letter, temporarily make it lowercase
		//    This ensures everything is lowercase by default.
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = str[i] + 32;

		// 2. Check if the CURRENT character is a letter (lowercase or original)
		if ((c >= 'a' && c <= 'z'))
		{
			// 3. Check if the NEXT character is a separator (space/tab) or end of string
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			{
				// If yes, this is the last letter of the word -> Make Uppercase
				c -= 32;
			}
		}
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}