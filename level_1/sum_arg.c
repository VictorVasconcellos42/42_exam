/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:06:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/20 19:44:55 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

int	is_number(char *argv)
{
	int i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		if (strlen(argv) == i)
			return (0);
		if ((!(argv[i] >= '0' && argv[i] <= '9')))
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])

{
	int	i;
	int	count;
	int	j;

	j = 0;
	i = 1;
	while (argv[i])
	{
		j = is_number(argv[i]);
		if (j == 1)
			return (0);
		i++;
	}
	i = 1;
	while (argv[i])
		count += atoi(argv[i++]);
	printf("%i", count);
	return (0);
}
