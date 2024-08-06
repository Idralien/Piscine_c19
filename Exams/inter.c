/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:23:30 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/28 14:20:30 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		comp(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (comp(s1, s1[i], i) == 0)
		{
			j = 0;
			while (s2[j] != '\0')
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
