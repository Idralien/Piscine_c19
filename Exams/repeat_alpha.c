/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:25:24 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/27 10:44:49 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat_alpha(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	repeat;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			repeat = repeat_alpha(argv[1][i]);
			while (repeat--)
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
