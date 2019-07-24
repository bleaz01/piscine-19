/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:11:01 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/19 09:36:51 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_srtlent(char *src)
{
	int i;
	int l;

	l = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		l++;
	}
	return (l);
}

char	ft_srtcopy(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char *dest; NULL;
	int taille;

	taille = ft_srtlent(src);
	dest = malloc(sizeof(src) * (taille + 1));
	ft_srtcopy(src, dest);
	if(src == NULL)
		exit(1);
	return(dest);
}
