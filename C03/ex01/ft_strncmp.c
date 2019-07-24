/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaghoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:55:53 by abaghoud          #+#    #+#             */
/*   Updated: 2019/07/21 14:18:19 by abaghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int res;

	i = 0;
	res = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (n > 0))
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			res = s1[i] - s2[i];
			return (res);
		}
		n--;
	}
	return (0);
}
