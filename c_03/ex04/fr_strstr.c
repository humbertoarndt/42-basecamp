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
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//passar dois parametros char e encontrar o segundo dentro do primeiro

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

int		main(void)
{
	char	arr1[] = "humberto";
	char	arr2[] = "b";
	char	*ptr1;
	char	*ptr2;
	char	*ret1;
	char	*ret2;

	ptr1 = arr1;
	ptr2 = arr2;

	ret1 = strstr(ptr1, ptr2);
	printf("Return = %s\n", ret1);
	ret2 = ft_strstr(ptr1, ptr2);
	printf("Return = %s\n", ret2);
}