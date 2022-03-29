/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:24:52 by harndt            #+#    #+#             */
/*   Updated: 2022/03/29 12:35:05 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	base;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		base = nb;
		while (power-- > 1)
			nb = base * nb;
	}
	return (nb);
}
