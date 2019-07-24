/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:02:40 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/11 15:43:25 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int solution;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i])
		{
			if ((str[i] > 31) && (str[i] < 127))
			{
				solution = 1;
			}
			else
			{
				return (0);
			}
			i++;
		}
	}
	return (solution);
}
