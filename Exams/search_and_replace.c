/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:46:17 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/27 11:36:44 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (argc != 4)
		write (1, "\n", 1);
//	if (argv[2][1] != '\0' || argv[3][1] != '\0')
//		write (1, "\n", 1);
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][x])
			argv[1][i] = argv[3][x];
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
