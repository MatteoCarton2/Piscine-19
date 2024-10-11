/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:48:37 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/05 22:42:25 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("La valeur de div = %d, la valeur de mod = %d", div, mod);
}
*/
