/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:45:19 by harndt            #+#    #+#             */
/*   Updated: 2022/03/14 19:52:19 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	char	*ptr;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] !='\0' && str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
