/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:00:28 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/07 21:00:32 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x)
{
	int	longueur;

	longueur = 0;
	ft_putchar('/');
	while (longueur < x - 2)
	{
		ft_putchar('*');
		longueur++;
	}
	if (x != 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middleline(int x, int y)
{
	int	longueur;
	int	height;

	longueur = 0;
	height = 0;
	while (height < y - 2)
	{
		ft_putchar('*');
		while (longueur < x - 2)
		{
			ft_putchar(' ');
			longueur++;
		}
		if (x != 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		longueur = 0;
		height++;
	}
}

void	lastline(int x, int y)
{
	int	longueur;

	longueur = 0;
	if (y != 1)
	{
		ft_putchar('\\');
		while (longueur < x - 2)
		{
			ft_putchar('*');
			longueur++;
		}
		if (x != 1)
		{
			ft_putchar('/');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	height;

	height = 0;
	if (x > 0 && y > 0)
	{
		firstline(x);
		if (x != 1 || y != 1)
		{
			middleline(x, y);
			lastline(x, y);
		}
	}
}
