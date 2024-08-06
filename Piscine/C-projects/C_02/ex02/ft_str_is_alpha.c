/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:02:28 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/13 14:00:39 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	only_alpha[] = "Campus";
	char	all_char[] = "Campus19";
	char	empty[] = "";
	
	printf ("Only alphabet characters: %d\n", ft_str_is_alpha(only_alpha));
	printf ("Other characters: %d\n", ft_str_is_alpha(all_char));
	printf ("No characters: %d\n", ft_str_is_alpha(empty));
	return (0);
}*/
