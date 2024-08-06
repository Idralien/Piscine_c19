/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:02:02 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/06 15:51:19 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int		tot_char;
	char	*str;

	str = "This are all the characters in this string";
	tot_char = ft_strlen(str);
	printf ("Characters: %d\n", tot_char);
	return (0);
}*/
