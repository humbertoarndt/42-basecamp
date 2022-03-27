/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:29:54 by harndt            #+#    #+#             */
/*   Updated: 2022/02/09 18:24:37 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(int n)
{
	char	c1;
	char	c2;

	if (n < 10)
	{
		c1 = n + '0';
		write(1, "0", 1);
		write(1, &c1, 1);
	}
	else
	{
		c1 = (n / 10) + '0';
		c2 = (n % 10) + '0';
		write(1, &c1, 1);
		write(1, &c2, 1);
	}
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 99)
	{
		n2 = 0;
		while (n2 <= 99)
		{
			if (n1 < n2)
			{
				if (!(n1 == 0 && n2 == 1))
				{
					write(1, ", ", 2);
				}
				ft_print_digits(n1);
				write(1, " ", 1);
				ft_print_digits(n2);
			}
			n2++;
		}
		n1++;
	}
}
