
#include <stdio.h>
#include <stdlib.h>

int	is_prime(int number)

{
	if (number == 1)
		return (1);
	else if(number % 2 == 0 && number != 2)
		return (2);
	else if (number % 3 == 0 && number != 3)
		return (3);
	else if (number % 5 == 0 && number != 5)
		return (5);
	else if (number % 7 == 0 && number != 7)
		return (7);
	return (1);
}

int	main(int argc, char *argv[])

{
	if (argc == 2)
	{
		int	number;

		number = atoi(argv[1]);
		if (number <= 0)
		{
			printf("\n");
			return (0);
		}
		if (is_prime(number) == 1)
			return ((int)printf("%i", number));
		else
		{
			int	prime;

			prime = is_prime(number);
			while (is_prime(number) != 1 || number != 1)
			{
				number /= prime;
				printf("%i", prime);
				while (number % prime != 0 && number != 1)		
					prime++;
				if (number % prime != 0)
					break ;
				printf("*");
			}
		}	
	}
	printf("\n");
	return (0);
}
