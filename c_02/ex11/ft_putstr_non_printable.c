/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:43:34 by harndt            #+#    #+#             */
/*   Updated: 2022/02/25 15:43:34 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	
}

void	ft_puthex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c >= 16)
	{
		ft_puthex(c / 16);
		//ft_puthex(c % 10);
	}
	else
		ft_putchar('0');
		ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == 127 || (str[i] > 0 &&  str[i] < 32))
		{
			ft_putchar('\\');
			ft_puthex(str[i]);
		}
		else
			ft_putchar(str[i]);
	}
}
