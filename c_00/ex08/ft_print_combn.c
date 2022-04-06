/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:10:24 by harndt            #+#    #+#             */
/*   Updated: 2022/02/24 19:32:36 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int *range, int n)
{
	int		i;
	int		show;

	show = 1;
	i = -0;
	while(++i < n)
		if (range[i - 1] >= range[i])
			show = 0;
	if (!show)
		return;
	//Imprimir números sem repetição
	i = -1;
	while (++i < n)
		{
			ft_putchar(range[i] + '0');
		}
		if (range[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
}

void	ft_print_combn(int n)
{
	int		i;
	int		range[10];

	if (n < 0 || n > 10)
		return;
	i = -1;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n > 0)
	{	
		print_digits(range, n);
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i -1]++;
				range[i] = 0;
			}
			
		}
		
	}
}
