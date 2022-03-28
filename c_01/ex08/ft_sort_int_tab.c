/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:46:11 by harndt            #+#    #+#             */
/*   Updated: 2022/02/16 04:31:13 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = size -1;
	while (i)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j] > tab[j +1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j +1] = aux;
			}
			j++;
		}
		i--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_sort(tab, size);
}
