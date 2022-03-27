/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_success.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:20:32 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/14 01:27:07 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	split_success(char *argv, int *argument)
{
	int	lenght;
	int	i;

	lenght = 0;
	i = 0;
	while (argv[lenght])
		lenght++;
	if (lenght != 31)
		return (1);
	while (i < lenght)
	{
		if ((i % 2 == 1) && (argv[i] != ' '))
			return (1);
		else if (i % 2 == 0)
		{
			if ((argv[i] > '4') || (argv[i] < '1'))
				return (1);
			else
				argument[i / 2] = (argv[i] - 48);
		}
		i++;
	}
	return (0);
}
