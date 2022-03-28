/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:27:37 by harndt            #+#    #+#             */
/*   Updated: 2022/02/10 20:10:08 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	size--;
	while (index < size)
	{
		swap = tab[index];
		tab[index] = tab[size];
		tab[size] = swap;
		index++;
		size--;
	}
}
