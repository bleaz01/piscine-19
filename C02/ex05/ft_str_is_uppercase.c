/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:46:08 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/10 23:23:00 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
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
			if ((str[i] >= 65) && (str[i] <= 90))
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
