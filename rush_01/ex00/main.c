/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:21:50 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 01:39:21 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int mtx[4][4]);
int		solution(int mtx[4][4], int argument[16], int position);
int		split_success(char *argv, int *argument);
int		help(int mtx[4][4], int argument[16], int position);

void	fill(int mtx[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			mtx[x][y] = 0;
			y++;
		}
		x++;
	}
}

int	main(int argc, char *argv[])
{
	int	argument[16];
	int	mtx[4][4];
	int	position;
	int	x;

	fill(mtx);
	position = 0;
	if (argc != 2 || split_success(argv[1], argument) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
	{
		x = help(mtx, argument, position);
		return (x);
	}
}
