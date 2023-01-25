
#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)

{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	if (nbr < 10)
	{
		nbr = nbr + '0';
		ft_putchar(nbr);
	}
}

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int argc, char *argv[])

{
	if (argc == 2)
	{
		unsigned int	number;
		unsigned int	i;
		unsigned int	tab;
		char			*str = argv[1];

		tab = 49;
		i = 0;
		number = 0;
		while (str[i] >= '0' && str[i] <= '9')
			number = number * 10 + (str[i++] - '0');
		i = 1;
		while (tab <= 57)
		{
			ft_putchar(tab);
			ft_putstr(" x ");
			ft_putnbr(number);
			ft_putstr(" = ");
			ft_putnbr(number * i);
			ft_putchar('\n');
			i++;
			tab++;
		}

	}
	else 
		ft_putchar('\n');
}
