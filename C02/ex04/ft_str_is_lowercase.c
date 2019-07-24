/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:17:23 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/10 23:20:10 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
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
			if ((str[i] >= 97) && (str[i] <= 122))
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
