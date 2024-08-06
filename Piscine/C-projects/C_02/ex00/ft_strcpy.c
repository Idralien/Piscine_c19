/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:53:16 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/07 08:19:23 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src1[] = "19";
	char src2[] = "19";
	char dest1[] = "Campus";
	char dest2[] = "Campus";

	printf ("%s\n", ft_strcpy(dest1, src1));
	printf ("%s\n", strcpy(dest2, src2));
	return (0);
}*/
