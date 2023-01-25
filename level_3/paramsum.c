
#include <unistd.h>

void	putnbr(int num)

{
	if (num > 9)
	{
		putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		num = num + '0';
		write(1, &num, 1);
	}
}

int main(int argc, char **argv)

{
	(void)argv;
	if (argc > 1)
		putnbr(argc - 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

