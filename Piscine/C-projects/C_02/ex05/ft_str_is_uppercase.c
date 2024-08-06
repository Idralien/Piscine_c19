/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:08:40 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/07 13:15:26 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	uppercase[] = "CAMPUS";
	char	other_char[] = "CaMpUs19";
	char	empty[] = "";

	printf ("Uppercase: %d\n", ft_str_is_uppercase(uppercase));
	printf ("Other characters: %d\n", ft_str_is_uppercase(other_char));
	printf ("Empty: %d\n", ft_str_is_uppercase(empty));
	return (0);
}*/
