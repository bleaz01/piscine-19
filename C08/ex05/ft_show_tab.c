/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:36:16 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/24 20:28:54 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void		ft_putstr(char *str	)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

voidft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if ((n / 10) > 0)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
void		ft_show_tab(struct s_stoc	k_str *par)
{
	int		c;
	int		i;
	char	a;

	i = 0;
	a = '\n';
	while (par[i].str != 0)
	{
		c = par[i].size;
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(c);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
