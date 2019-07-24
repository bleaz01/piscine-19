/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:27:12 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/05 15:28:01 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	compt(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			compt(a / 10 + '0');
			compt(a % 10 + '0');
			compt(' ');
			compt(b / 10 + '0');
			compt(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				compt(',');
				compt(' ');
			}
			++b;
		}
		++a;
	}
}
