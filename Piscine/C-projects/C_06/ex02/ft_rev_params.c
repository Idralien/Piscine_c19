/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:23:14 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 11:02:25 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Schrijft ook stuk voor stuk het argument,
doordat argc - 1 gezet word, begint het van achter te tellen.
daarna die je het argument -- om naar beneden te tellen.
de i++ telt het woord op.*/

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	argument;

	argument = argc - 1;
	while (argument > 0)
	{
		i = 0;
		while (argv[argument][i] != '\0')
		{
			ft_putchar(argv[argument][i]);
			i++;
		}
		ft_putchar('\n');
		argument--;
	}
	return (0);
}
