/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:16:37 by harndt            #+#    #+#             */
/*   Updated: 2022/02/18 02:14:07 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}


#include <stdio.h>

int main(void)
{
	char arr[1] = "\n";
	int x = -1;
	x = ft_str_is_printable(arr);
	printf("X Contém apenas imprimíveis: %d\n", x);
}