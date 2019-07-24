/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:31:50 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/23 18:25:27 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int *min, int max)
{
	int *tab;
	int i;
	int size;

	size = max - min;
	if (min >= max)
		return (tab);
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = min - max;
	i = 0;
	while(i < size)
	{
		*range = *fr_range(min, max);
		i++;
	}
	printf("%d", **range);
	return(0);
}
int		main()
{
	int min = 5;
	int max = 36;
	ft_ultimate_range(range,  min, max);
	return(0);
}
