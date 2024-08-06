/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:39:13 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 14:00:12 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Programma 0 is de programma naam*/

#include <unistd.h>

void	ft_print_program_name(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_print_program_name(argv[0][i]);
		i++;
	}
	ft_print_program_name('\n');
	return (0);
}
