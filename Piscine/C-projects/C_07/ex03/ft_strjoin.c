/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:46:22 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/22 15:15:57 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

int	full_len(char **strlen, int size, int seplen)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strlen[i]);
		length = length + seplen;
		i++;
	}
	length = length - seplen;
	return (length);
}

int	ft_extra(int *size)
{
	if (size == 0)
	{
		return (*(char *)malloc(sizeof(char)));
	}
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		length;
	int		i;

	i = 0;
	length = full_len(strs, size, ft_strlen(sep));
	result = (char *)malloc(length + 1 * sizeof(char *));
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	size;
	char	**strs;
	char	*sep;
	char	*res;

	size = 4;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 3 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 6 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 11 + 1);
	strs[3] = (char *)malloc(sizeof(char) * 4 + 1);	
	
	strs[0] = "Dit";
	strs[1] = "Is";
	strs[2] = "Campus";
	strs[3] = "19";
	
	sep = ", ";
	res = ft_strjoin(size, strs, sep);
	if (res)
		printf("%s\n", res);
	else
		printf ("Malloc fialed!");
	return (0);
}*/

/*	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i < size - 1)
			length += ft_strlen(sep);
		i++;
	}
*/
