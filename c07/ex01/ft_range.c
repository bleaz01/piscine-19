/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:40:12 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/19 13:48:46 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int size;

	size = max - min;
	if(min >= max)
		return(tab);
	tab = malloc(sizeof(tab) * (max - min));
	if (tab == NULL)
		return(0);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
int		main()
{
	int *tab;
	int min = 5;
	int max = 50;

	ft_range(min, max);
	printf("%d", *tab);
	return(0);
}
