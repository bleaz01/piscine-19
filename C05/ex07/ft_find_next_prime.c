/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:58:28 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/21 23:39:09 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 0)
		return (2);
	if (nb == 0)
		return (2);
	i = nb;
	while (i != ft_is_prime(i))
	{
		i++;
	}
	return (i);
}
