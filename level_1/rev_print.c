/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:16:34 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/20 12:21:22 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])

{
	int	i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (i >= 0)
			write(1, &argv[1][i--], 1);
	}
	write(1, "\n", 1);
	return (0);
}
