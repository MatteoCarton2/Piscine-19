/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:33:29 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/05 22:43:50 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("a = %d et b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div =  %d et mod =  %d\n", a, b);
}
*/
