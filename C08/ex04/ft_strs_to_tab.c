/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:35:25 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/24 20:26:30 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int					ft_lenstr(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int				i;
	int				len;
	char			*c;

	i = 0;
	len = ft_lenstr(src);
	c = (char*)malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (NULL);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

int					calcul_malloc(int ac, char **av)
{
	int				i;
	int				taille;

	i = 0;
	taille = 0;
	while (i < ac)
	{
		taille += sizeof(int) + (2 * sizeof(av[i]));
		i++;
	}
	return (taille);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	if (!(tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_lenstr(av[i]);
		tab[i].str = av[i];
		if (!(tab[i].copy = ft_strdup(av[i])))
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
