/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:24:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/19 18:20:40 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "level_1/ft_putstr.c"
#include "level_1/ft_swap.c"
#include "level_1/ft_strlen.c"

int	main(int argc, char *argv[])

{
	char	*str;
	int		*a;
	int		len;
	int		len2;
	int		*b;

	str = argv[1];
	len = ft_strlen(str);
	ft_putstr(str);
	printf("\nTamanho da String: %i", len);
	a = &len;
	len2 = len + 10;
   	b = &len2;
	printf("\nString[1]: %i\tString[2]: %d\n", *a, *b);
	ft_swap(a, b);
	printf("\nString[1]: %i\tString[2]: %i\n", *a, *b);
	return (0);
}
