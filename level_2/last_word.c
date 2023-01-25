
#include <unistd.h>

int	ft_strlen(char *str)

{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

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

		string = argv[1];
		i = ft_strlen(argv[1]) - 1;
		while (is_space(string[i]) == 0)
			i--;
		while (is_space(string[i]) == 1)
			i--;
		i++;
		while (is_space(string[i]) == 1 && string[i])
			ft_putchar(string[i++]);

	}
	ft_putchar('\n');
	return (0);
}

