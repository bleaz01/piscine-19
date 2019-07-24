/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 21:36:52 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/07 21:41:13 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	premierligne();

void	premierligne(int x)
{
	int wx;

	ft_putchar(47);
	wx = 0;
	while (wx <= x - 3)
	{
		ft_putchar(42);
		wx++;
	}
	if (x != 1)
	{
		ft_putchar(92);
		write(1, " \n", 2);
	}
	else
	{
		write(1, " \n", 2);
	}
}

void	troisiemeligne(int x)
{
	int wx;

	ft_putchar(92);
	wx = 0;
	while (wx <= x - 3)
	{
		ft_putchar(42);
		wx++;
	}
	if (x != 1)
	{
		ft_putchar(47);
		write(1, " \n", 2);
	}
	else
	{
		write(1, " \n", 2);
	}
}

void	deuxiemeligne(int x)
{
	int wx;

	ft_putchar(42);
	wx = 0;
	while (wx <= x - 3)
	{
		ft_putchar(' ');
		wx++;
	}
	if (x != 1)
	{
		ft_putchar(42);
		write(1, " \n", 2);
	}
	else
	{
		write(1, " \n", 1);
	}
}

void	rush(int x, int y)
{
	int wy;

	if ((x > 0) && (y >= 0))
	{
		premierligne(x);
	}
	wy = 0;
	while (wy <= y - 3)
	{
		deuxiemeligne(x);
		wy++;
	}
	if (y >= 2)
	{
		troisiemeligne(x);
	}
	else
	{
		write(1, "Please enter a positive number\n", 32);
	}
}
