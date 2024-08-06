/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:06:45 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/27 15:10:28 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (argv[1][i] == '\t' || argv[1][i] == ' ')
			i--;
		while (i > 0)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				break;
			i--;
		}
		i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
