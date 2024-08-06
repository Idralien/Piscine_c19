/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:45:33 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 15:51:28 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Putchar en Putstr schrijven gewoon alles.
strcmp bekijkt of het alphabetis klopt en als dit niet is
dan gebruik je de functie swap om de parameters van plaats te veranderen
tot de volgorde klopt.
De teller word op 1 gezet omdat het van het eerste echte argument moet
beginnen tellen*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char *argv[])
{
	int	arg;
	int	teller;

	teller = 1;
	while (teller < argc)
	{
		arg = 1;
		while (arg < argc - 1)
		{
			if (ft_strcmp(argv[arg], argv[arg + 1]) > 0)
				ft_swap(&argv[arg], &argv[arg + 1]);
			arg++;
		}
		teller++;
	}
	arg = 1;
	while (arg < argc)
	{
		ft_putstr(argv[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
