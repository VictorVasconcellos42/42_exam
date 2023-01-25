
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)

{
	int	i;

	i = 0;
	while (s[i] && s[i] != reject[0])
		i++;
	return (i);
}

//int	main(int argc, char *argv[])
//
//{
//	if (argc != 3)
//		return (1);
//	char *str = argv[1];
//	char *set = argv[2];
//	size_t	value;
//
//	value = strcspn(str, set);
//	printf("Return Value: %zu", value);
//	value = ft_strcspn(str, set);
//	printf("\nReturn Value: %zu", value);
//}

