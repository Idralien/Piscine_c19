/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:25:50 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/13 13:58:44 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src1[] = "World";
	char	src2[] = "World";
	char	dest1[] = "Campus";
	char	dest2[] = "Campus";
	int	n;

	n = 2;
	printf ("%s\n", ft_strncpy(dest1, src1, n));
	printf ("%s\n", strncpy(dest2, src2, n));
	return (0);
}*/
