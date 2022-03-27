/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:16:09 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 01:25:06 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkdoubles(int mtx[4][4], int position, int size);
int	checkargument(int mtx[4][4], int position, int argument[16]);

int	solution(int mtx[4][4], int argument[16], int position)
{
	int	size;

	size = 0;
	if (position == 16)
		return (0);
	while (++size <= 4)
	{
		if (checkdoubles(mtx, position, size) == 0)
		{
			mtx[position / 4][position % 4] = size;
			if (checkargument(mtx, position, argument) == 0)
			{
				if (solution(mtx, argument, (position + 1)) == 0)
					return (0);
			}
			else
				mtx[position / 4][position % 4] = 0;
		}
	}
	return (1);
}
