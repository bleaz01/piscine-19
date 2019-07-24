/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 08:51:27 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/10 23:11:40 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int solution;

	i = 0;
	if (str[i] == '\0')
	{
		solution = 1;
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 48) && (str[i] <= 57))
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
