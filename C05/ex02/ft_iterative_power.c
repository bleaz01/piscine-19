/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:33:07 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/21 18:31:45 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int x;

	x = nb;
	result = 0;
	if ((nb == 0) && (power == 0))
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (power > 1)
		{
			nb = nb * x;
			power--;
		}
		return (nb);
	}
	return (0);
}
