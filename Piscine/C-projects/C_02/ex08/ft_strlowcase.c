/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:37:45 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/08 09:08:12 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	lowercase[] = "DiT MOET in KlEine lettERS";
	char	other_char[] = "!@#%#%^%";
	char	edge[] = "AaZz";

	printf ("Lowercase: %s\n", ft_strlowcase(lowercase));
	printf ("Other characters: %s\n", ft_strlowcase(other_char));
	printf ("Breaks: %s\n", ft_strlowcase(edge));
	return (0);
}*/
