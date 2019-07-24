/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriguell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:25:41 by jriguell          #+#    #+#             */
/*   Updated: 2019/07/22 14:11:47 by jriguell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *e)
{
	int i;

	i = 0;
	while (e[i])
	{
		write(1, &e[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
