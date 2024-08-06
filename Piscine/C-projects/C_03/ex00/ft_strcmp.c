/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:35:24 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/08 11:51:10 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf ("%d", ft_strcmp("Hello", "Hello1"));
	printf ("\n%d", ft_strcmp("Hello", "He"));
	printf ("\n%d", ft_strcmp("He", "Hello"));
	printf ("\n%d", ft_strcmp("Hello", "Hello"));
	printf ("\n%d", ft_strcmp("Hello", "World"));
}*/
