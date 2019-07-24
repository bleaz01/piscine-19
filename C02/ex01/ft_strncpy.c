/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 21:06:36 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/11 16:36:25 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dest2;
	char *src2;

	src2 = src;
	dest2 = dest;
	while (*src2 && n > 0)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		n--;
	}
	while (n > 0)
	{
		*dest2 = '\0';
		dest2++;
		n--;
	}
	return (dest);
}
