/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:29:58 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/07 12:13:43 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	lower_case[] = "campus";
	char	other_char[] = "CaMpUs19";
	char	empty[] = "";

	printf ("Lowercase: %d\n", ft_str_is_lowercase(lower_case));
	printf ("Other characters: %d\n", ft_str_is_lowercase(other_char));
	printf ("Empty %d\n", ft_str_is_lowercase(empty));
	return(0);
}*/
