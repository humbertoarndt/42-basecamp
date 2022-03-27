/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:10:24 by harndt            #+#    #+#             */
/*   Updated: 2022/02/18 19:32:36 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	rem;

	if (nb == -2147483648)
	{
		write(1, &"-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		rem = (nb % 10) + 48;
		write(1, &rem, 1);
	}
}

#include <unistd.h>

int main(void)
{
	ft_putnbr(9);
}