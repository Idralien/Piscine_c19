/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:27:19 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/17 12:53:09 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if ((i / 10 != 9) || (i % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return(0);
}*/
