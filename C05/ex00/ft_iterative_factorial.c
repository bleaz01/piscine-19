/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:33:03 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/21 23:14:02 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;

	x = nb - 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb == 2)
		return (2);
	if (nb > 2)
	{
		while (x > 1)
		{
			nb = nb * x;
			x--;
		}
		return (nb);
	}
	return (0);
}
