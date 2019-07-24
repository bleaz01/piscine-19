/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaghoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:25:20 by abaghoud          #+#    #+#             */
/*   Updated: 2019/07/21 09:54:22 by abaghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	k = 0;
	i = 0;
	while (dest[k] != '\0')
		k++;
	while (src[i] != '\0' && nb > 0)
	{
		dest[i + k] = src[i];
		i++;
		nb--;
	}
	dest[i + k] = '\0';
	return (dest);
}
