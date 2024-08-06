/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:58:49 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/07 11:00:14 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	only_digits[] = "1234";
	char	other_char[] = "Brent26";
	char	empty[] = "";
	
	printf ("Only digits: %d\n", ft_str_is_numeric(only_digits));
	printf ("Other characters: %d\n", ft_str_is_numeric(other_char));
	printf ("Empty: %d\n", ft_str_is_numeric(empty));
	return (0);
}*/
