/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:48:27 by harndt            #+#    #+#             */
/*   Updated: 2022/03/09 20:45:27 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//receber um array do tipo char e seu tamanho
//imprimir a primeira posição
//imprimir imprimir 16 pares de posições
//imprimir 16 posições

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_hex(int i, unsigned int size, unsigned char *str)
{
	char	*hex;
	int		j;

	j = 0;
	hex = "0123456789abcdef";
	while(j < 16 && i + j < size)
	{
		ft_putchar(hex[*(str + i + j) / 16]);
		ft_putchar(hex[*(str + i + j) % 16]);
		if(j % 2)
			ft_putchar(32);
		j++;
	}
	while(j < 16)
	{
		ft_putchar(32);
		ft_putchar(32);
		if (j % 2)
			ft_putchar(32);
		j++;
	}
}

void	print_adress(unsigned long int str)
{
	unsigned char	address;
	char			*hex;
	char			buffer[16];
	int				i;

	i = -1;
	hex = "0123456789abdcef";
	address = (unsigned long int)str;
	while (++i < 16)
	{
		buffer[i] = hex[address % 16];
		address /= 16;
	}
	while(i-- > 0)
		write(1, &buffer[i], 1);
	ft_putchar(58);
	ft_putchar(32);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	int					j;
	char				*str;
	int					k;

	str = (unsigned char *)addr; //cast pra poder manipular array
	i = 0;
	k = -1;
	while(i < size)
	{
		j = 0;
		print_adress((unsigned long int)str + (++k * 16));
		ft_display_hex(i, size, str);
		while(j < 16 && i + j < size)
		{
			if(*(str + i + j) >= 32 && *(str + i + j) <= 126)
				ft_putchar((char)*(str + i + j));
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

int		main(void)
{
	// char	arr[] = "abcdefghijklmnopqrstuvwxyz";
	char	arr[] = "Furueru hodo kokoro moetsukiru hodo atsuku Sono te kara hanate kodou karada minagiru yuuki de Mayou naki kakugo 'Kassai' wo! ~Sono chi no sadame ~JoJo~";
	// char	arr[] = "Bonjour les amin";
	void	*p;
	int		i = -1;

	while (arr[++i] != '\0')
	p = arr;
	// printf("%d\n", i);
	ft_print_memory(p, i);
}

