
#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (0);
	return (1);
}

void	ft_putchar(char c)

{
	write(1, &c, 1);
}


int	main(int argc, char *argv[])

{

	if (argc == 2)
	{	
		char	*string;
		int		i;

		i = 0;
		string = argv[1];
		while (is_space(string[i]) == 0)
			i++;
		while (string[i] && is_space(string[i]) == 1)
			ft_putchar(string[i++]);
	}
	ft_putchar('\n');
	return (0);
}

