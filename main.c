/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:24:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/08/19 17:34:04 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr.c"
#include "ft_strlen.c"

int	main(int argc, char *argv[])

{
	char	*str;
	int		len;

	str = argv[1];
	len = ft_strlen(str);
	ft_putstr(str);
	printf("\nTamanho da String: %i", len);
	return (0);
}
