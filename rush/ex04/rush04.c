/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 22:10:17 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/07 22:15:00 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	premierligne();

void	premierligne(int x)
{
	int wx;

	ft_putchar('A');
	wx = 0;
	while (wx <= x - 3)
	{
		ft_putchar('B');
		wx++;
	}
	if (x != 1)
	{
		write(1, "C\n", 2);
	}
	else
	{
		write(1, " \n", 2);
	}
}

void	troisiemeligne(int x)
{
	int wx;

	ft_putchar('C');
	wx = 0;
	while (wx <= x - 3)
	{
		ft_putchar('B');
		wx++;
	}
	if (x != 1)
	{
		write(1, "A\n", 2);
	}
	else
	{
		write(1, " \n", 2);
	}
}

void	deuxiemeligne(int x)
{
	int wx;

	ft_putchar('B');
	wx = 0;
	while (wx <= x - 3)
	{
		ft_putchar(' ');
		wx++;
	}
	if (x != 1)
	{
		write(1, "B\n", 2);
	}
	else
	{
		write(1, "\n", 1);
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
