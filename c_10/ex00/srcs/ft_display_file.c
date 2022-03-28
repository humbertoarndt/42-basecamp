/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:56:17 by harndt            #+#    #+#             */
/*   Updated: 2022/03/28 04:32:41 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display_file(char *filepath)
{
	int		size;
	int		file_descriptor;
	char	buffer[BUF_SIZE + 1];

	file_descriptor = open(filepath, O_RDONLY);
	if (file_descriptor == -1)
		ft_putstr("Cannot read file.\n");
	while (1)
	{
		size = read(file_descriptor, buffer, BUF_SIZE);
		if (size == 0)
			break ;
		if (size == -1)
			ft_putstr("Cannot read file.\n");
		buffer[size] = 0;
		ft_putstr(buffer);
	}
	close(file_descriptor);
}
