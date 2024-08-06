/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:52:49 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/27 17:24:25 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		i = ft_strlen(&argv[1][i]) - 1;
		while (argv[1][i] != '\0') /*while (i >= 0)*/
		{
			write (1, &argv[1][i], 1);
			i--;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
