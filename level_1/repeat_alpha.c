/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:25:57 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/20 13:09:16 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])

{
	int	i;
	char ualpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lalpha[] = "abcdefghijklmnopqrstuvwxyz";
	char str;
	int	 count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i] - 'A';
			str = argv[1][i];
			if (ualpha[count] == argv[1][i] || lalpha[count] == argv[1][i])
			{
				count += 1;
				while (count--)
					write(1, &str, 1);
			}
			else
				write(1, &str, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);	
}
