/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdoubles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:10:15 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 00:10:17 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkdoubles(int mtx[4][4], int position, int size)
{
	int	i;

	i = -1;
	while (++i < (position / 4))
	{
		if ((mtx[i][position % 4]) == size)
			return (1);
	}
	i = -1;
	while (++i < (position % 4))
	{
		if ((mtx[position / 4][i]) == size)
			return (1);
	}
	return (0);
}
