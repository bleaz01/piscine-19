/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:45:08 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/23 09:59:16 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	ft_strlen(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while(str[i] != '\0')
	{
		i++;
		size++;
	}
	return(size);
}

char	ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return(*dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;

	j = 0;
	i = 0;
	size = (int)malloc(sizeof(size) * size + 1);
	if (size == NULL)
		return (1);
	while (i > size)
	{	
		while (strs[i])
		{
			ft_putchar(strs[i][j]);
			j++;
		}
		i++;
		ft_putchar(*sep); 
	}
	return (0);
}
int		main(int argc, char **argv)
{
	ft_strjoin(4, strs, "|");
	return (0);
}
