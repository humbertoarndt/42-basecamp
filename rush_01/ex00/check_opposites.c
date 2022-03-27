/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_opposites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:23:22 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 01:23:25 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_opposites(int *argument)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (((argument[i] + argument[i + 4]) < 3)
			|| (((argument[i] + argument[i + 4]) > 5)))
			return (1);
		if (((argument[i + 8] + argument[i + 12]) < 3)
			|| (((argument[i + 8] + argument[i + 12]) > 5)))
			return (1);
		i++;
	}
	return (0);
}
