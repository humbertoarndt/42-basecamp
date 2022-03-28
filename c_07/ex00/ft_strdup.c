/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:47:35 by harndt            #+#    #+#             */
/*   Updated: 2022/03/26 02:21:58 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i--);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ptr;

	if (src != NULL)
	{
		i = 0;
		len = ft_strlen(src);
		ptr = (char *) malloc (len *(sizeof(int)));
		while (i <= len)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
