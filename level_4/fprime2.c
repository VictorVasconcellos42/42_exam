
#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)

{
	if (n == 1)
		return (1);
	if (n % 2 == 0 && n != 2)
		return (2);
	if (n % 3 == 0 && n != 3)
		return (3);
	if (n % 5 == 0 && n != 5)
		return (5);
	if (n % 7 == 0 && n != 7)
		return (7);
	if (n % 11 == 0 && n != 11) 
		return (11);
	return (0);
}

int main(int argc, char **argv)

{
	if (argc == 2)
	{
		int n = atoi(argv[1]);
		if (n < 1)
			return ((int)printf("\n"));
		if (is_prime(n) == 0)
			return ((int)printf("%i\n", n));
		else if (n == 1)
			return ((int)printf("%i\n", n));
		int prime;

		prime = is_prime(n);
		while (is_prime(n) != 1 || n != 1)
		{
			n = n / prime;
			printf("%i", prime);
			while (n % prime != 0)
			{
				prime++;
				if (n == 1)
					break ;
			}
			if (n == 1)
				break ;
			printf("*");
		}
	}
	printf("\n");
	return (0);
}
