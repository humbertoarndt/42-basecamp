/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:34:35 by harndt            #+#    #+#             */
/*   Updated: 2022/02/19 03:22:35 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i++] != '\0')
		write(1, &argv[0][i], 1);
	write (1, "\n", 1);
	(void)ac;
	return (0);
}
