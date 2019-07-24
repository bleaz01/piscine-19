/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicoc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:06:23 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/21 13:00:16 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 10000

struct Libary
{
	int j;
}Libary;


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		write(1, &i, 1);
	}
}

int		main(int argc, char **argv)
{
	int fd;
	char  buf[BUF_SIZE + 1];

	if(!(fd = open("numbers.txt", O_RDWR)))
	{
		return (0);
	}
	while ((Libary = read(fd, buf, BUF_SIZE))
	{
		Libary++;
	}
	return (buf);

	close(fd);



	

}

