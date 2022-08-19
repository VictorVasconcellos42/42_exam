/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 01:42:04 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/19 01:56:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			break;
	}
	return (i);
}

int	main(int argc, char *argv[])

{
	int	i;

	if (argc == 2)
	{
		i = is_space(argv[1]);
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			if (argv[1][i + 1] == ' ' ||  argv[1][i + 1] == '\0')
				break ;
			i++; 
		}
	}
	write(1, "\n", 1);
	return (0);
}
