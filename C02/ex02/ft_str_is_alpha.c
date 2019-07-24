/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 21:54:08 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/11 13:24:38 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int solution;

	solution = 0;
	i = 0;
	if (str[i] == '\0')
	{
		solution = 1;
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 65) && (str[i] <= 90))
			{
				solution = 1;
			}
			else if ((str[i] >= 97) && (str[i] <= 122))
				solution = 1;
			else
				return (0);
			i++;
		}
	}
	return (solution);
}
