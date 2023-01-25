
#include <stdlib.h>

char	*ft_strdup(char *str)

{
	int i = 0;
	char *dup;
	while (str[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

