/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:22:32 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/28 10:31:41 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	sub_strs(char *str, char *sep)
{
	int	part;
	int	i;

	part = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!check_char(str[i], sep) && part)
		{
			i++;
			part = 0;
		}
		else if (check_char(str[i], sep))
			part = 1;
		str++;
	}
	if (!check_char(*(str - 1), sep))
		i++;
	return (i);
}

char	*ft_strdup(char *src, char *sep)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !check_char(*buffer++, sep))
		length++;
	dest = (char *)malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *sep)
{
	char	**strs;
	char	**tmp;
	int		part;

	strs = (char **)malloc(sub_strs(str, sep) * sizeof(*strs) + 1);
	tmp = strs;
	part = 1;
	while (*str)
	{
		if (!check_char(*str, sep) && part)
		{
			part = 0;
			*tmp = ft_strdup(str, sep);
			tmp++;
		}
		else if (check_char(*str, sep))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}

/*int		main(int argc, char *argv[])
{
	char **strs;

	if (argc == 3)
	{
		printf("str: %s\n", argv[2]);
		printf("sep: %s\n", argv[1]);

		strs = ft_split(argv[2], argv[1]);
		while (*strs)
			printf("%s\n", *strs++);
	}
	printf("\n");
	return (0);
}*/
