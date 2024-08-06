/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:38:57 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/12 08:44:47 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			if (to_find[x + 1] == '\0')
			{
				return (&str[i]);
			}
			x++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	string[] = "brentsantschi";
	char	search[] = "tsan";
	char	*ret;
	
	ret = strstr(string, search);
	printf ("Test: %s\n", ret);
	printf ("The substring is: %s\n", ft_strstr(string, search));
	return (0);
}*/
