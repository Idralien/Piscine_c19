/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:51:02 by kvan-den          #+#    #+#             */
/*   Updated: 2024/02/11 13:43:31 by kvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_error(void);

void	ft_top_border(int x)
{
	char	buffer;
	int		i;

	i = 0;
	while (i <= x)
	{
		if (i == x -1)
		{
			buffer = 'C';
		}
		if (i == 0)
		{
			buffer = 'A';
		}
		if (i > 0 && i < x -1)
		{
			buffer = 'B';
		}
		if (i == x)
		{
			buffer = '\n';
		}
		ft_putchar(buffer);
		i++;
	}
}

void	ft_bot_border(int x)
{
	char	buffer;
	int		i;

	i = 0;
	while (i <= x)
	{
		if (i == x -1)
		{
			buffer = 'A';
		}
		if (i == 0)
		{
			buffer = 'C';
		}
		if (i > 0 && i < x -1)
		{
			buffer = 'B';
		}
		if (i == x)
		{
			buffer = '\n';
		}
		ft_putchar(buffer);
		i++;
	}
}

void	ft_body(int x)
{
	int		i;
	char	buffer;

	i = 0;
	while (i <= x)
	{
		if (i == 0 || i == x - 1)
		{
			buffer = 'B';
		}
		else
		{
			buffer = ' ';
		}
		if (i == x)
		{
			buffer = '\n';
		}
		ft_putchar(buffer);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		ft_print_error();
	else
	{
		while (i < y)
		{
			if (i == 0)
			{
				ft_top_border(x);
			}
			if (i != 0 && i == y -1)
			{
				ft_bot_border(x);
			}
			if (i > 0 && i < y -1)
			{
				ft_body(x);
			}
			i++;
		}
	}
}
