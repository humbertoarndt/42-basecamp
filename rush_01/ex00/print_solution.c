/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:05:12 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 01:14:16 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb < 10)
	{
		nb = nb + 48;
		write(1, &nb, 1);
		return ;
	}
	else
	{
		ft_putnbr (nb / 10);
		nb = (nb % 10) + 48;
		write(1, &nb, 1);
		return ;
	}
}

void	print_solution(int mtx[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putnbr(mtx[x][y]);
			if (y != 3)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
