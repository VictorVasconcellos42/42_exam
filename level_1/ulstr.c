/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:47:00 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/19 19:57:25 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lower(char c)

{
	if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

int	is_upper(char c)

{
	if (c >= 'A' && c <= 'Z')
		return (0);
	return (1);
}

int	main(int argc, char *argv[])

{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (is_upper(argv[1][i]) == 0)
				argv[1][i] += 32;
			else if (is_lower(argv[1][i]) == 0)
				argv[1][i] -= 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);	
	return (0);
}
