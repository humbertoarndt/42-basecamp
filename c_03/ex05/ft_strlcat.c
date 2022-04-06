/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:56:53 by harndt            #+#    #+#             */
/*   Updated: 2022/03/17 15:40:53 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		d_len;
	int		s_len;
	int		i;
	int		j;

	i = 0;
	j = -1;
	d_len = ft_strlen(dest);
	while(src[++j] != '\0' && j < size)
	{
		dest[d_len + i] = src[j];
		i++;
	}
	dest[d_len + i] = '\0';
	return(ft_strlen(dest));
}
