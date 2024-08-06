/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:50:39 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/08 09:10:06 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	uppercase[]= "Dit MoeT nAAr HOOFDletter";
	char	other_char[] = "@#$^%&";
	char	edge[] = "AaZz";

	printf ("%s\n", ft_strupcase(uppercase));
	printf ("%s\n", ft_strupcase(other_char));
	printf ("%s\n", ft_strupcase(edge));
	return (0);
}*/
