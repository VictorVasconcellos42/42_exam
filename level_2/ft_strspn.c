#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strchr(const char *s, int c)

{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(char *string, char *broken)

{
	int i = 0;
	int result = 0;

	while (string[i])
	{
		if (ft_strchr(broken, string[i]))
			result++;
		else
			break ;
		i++;
	}
	return (i);
}

int	main(void)

{
	char *string = "ABCDKEFGK";
	char *s2 = "ABC";

	printf("ORIGINAL: %lu\n", strspn(string, s2));
	printf("MINHA: %zu\n", ft_strspn(string, s2));
}