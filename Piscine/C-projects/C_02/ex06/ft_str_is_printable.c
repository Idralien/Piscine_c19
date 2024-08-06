/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:16:21 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/07 13:28:19 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	printable[] = "CAmpus19";
	char	non_print[] = "\t";
	char	empty[] = "";

	printf ("Printable: %d\n", ft_str_is_printable(printable));
	printf ("Non printable: %d\n", ft_str_is_printable(non_print));
	printf ("Empty: %d\n", ft_str_is_printable(empty));
	return (0);
}*/
