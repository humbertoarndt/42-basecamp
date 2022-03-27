/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:12:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 00:12:58 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	column_uptodown(int mtx[4][4], int position, int argument[16])
{
	int	i;
	int	max;
	int	quantity;

	i = 0;
	max = 0;
	quantity = 0;
	while (i < 4)
	{
		if (mtx[i][position % 4] > max)
		{
			max = mtx[i][position % 4];
			quantity++;
		}
		i++;
	}
	if (argument[position % 4] != quantity)
		return (1);
	return (0);
}

int	column_downtoup(int mtx[4][4], int position, int argument[16])
{
	int	i;
	int	max;
	int	quantity;

	i = 3;
	max = 0;
	quantity = 0;
	while (i >= 0)
	{
		if (mtx[i][position % 4] > max)
		{
			max = mtx[i][position % 4];
			quantity++;
		}
		i--;
	}
	if (argument[4 + (position % 4)] != quantity)
		return (1);
	return (0);
}

int	row_lefttoright(int mtx[4][4], int position, int argument[16])
{
	int	i;
	int	max;
	int	quantity;

	i = 0;
	max = 0;
	quantity = 0;
	while (i < 4)
	{
		if (mtx[position / 4][i] > max)
		{
			max = mtx[position / 4][i];
			quantity++;
		}
		i++;
	}
	if (argument[8 + (position / 4)] != quantity)
		return (1);
	return (0);
}

int	row_righttoleft(int mtx[4][4], int position, int argument[16])
{
	int	i;
	int	max;
	int	quantity;

	i = 3;
	max = 0;
	quantity = 0;
	while (i >= 0)
	{
		if (mtx[position / 4][i] > max)
		{
			max = mtx[position / 4][i];
			quantity++;
		}
		i--;
	}
	if (argument[12 + (position / 4)] != quantity)
		return (1);
	return (0);
}

int	checkargument(int mtx[4][4], int position, int argument[16])
{
	int	check;

	check = 0;
	if (position / 4 == 3)
	{
		check = column_uptodown(mtx, position, argument);
		return (check);
	}
	if (position / 4 == 3)
	{
		check = column_downtoup(mtx, position, argument);
		return (check);
	}
	if (position % 4 == 3)
	{
		check = row_lefttoright(mtx, position, argument);
		return (check);
	}
	if (position % 4 == 3)
	{
		check = row_righttoleft(mtx, position, argument);
		return (check);
	}
	return (check);
}
