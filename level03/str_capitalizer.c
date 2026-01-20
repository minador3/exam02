#include <unistd.h>

void	str_capitalizer(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];

		// 1. Force the character to lowercase first if it is uppercase
		if (c >= 'A' && c <= 'Z')
			c += 32;

		// 2. Check if we should capitalize this character
		// Condition: It must be a letter AND (it's the first char OR previous char was space/tab)
		if ((c >= 'a' && c <= 'z') && 
			(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			c -= 32;
		}

		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}