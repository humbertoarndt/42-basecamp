/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:00:15 by harndt            #+#    #+#             */
/*   Updated: 2022/02/13 16:27:55 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 10;
	div = 0;
	mod = 0;
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("DIV = %d\n", div);
	printf("MOD = %d\n", mod);
	printf("==DIV/MOD==\n");
	ft_div_mod(a, b, &div, &mod);
	printf("DIV = %d\n", div);
	printf("MOD = %d\n", mod);
}
