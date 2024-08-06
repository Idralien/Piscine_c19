/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:25 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/26 15:22:27 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	char	*d;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	d = dest;
	if (!d)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*array;
	struct s_stock_str	*d;

	array = malloc((argc + 1) * sizeof(struct s_stock_str));
	d = array;
	if (!d)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		array[i].size = ft_strlen(argv[i]);
		array[i].str = argv[i];
		array[i].copy = ft_strdup(argv[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
