/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:06:32 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 11:00:53 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Schrijft stuk voor stuk het argument op en begint bij het eerste argument
doordat ik arg op 1 gezet heb*/

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			ft_putchar(argv[arg][i]);
			i++;
		}
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
