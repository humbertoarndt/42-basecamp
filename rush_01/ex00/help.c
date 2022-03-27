/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:21:28 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 01:28:56 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solution(int mtx[4][4], int argument[16], int position);
int		check_opposites(int *argument);
void	print_solution(int mtx[4][4]);

int	help(int mtx[4][4], int argument[16], int position)
{
	if (check_opposites(argument) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
	{
		if (solution (mtx, argument, position) == 0)
		{
			print_solution (mtx);
			return (0);
		}
		else
			write(1, "Error\n", 6);
		return (1);
	}
}
