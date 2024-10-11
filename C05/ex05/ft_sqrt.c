/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:01:22 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/16 16:34:58 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	racine;
	long	min;
	long	milieu;
	long	max;

	if (nb < 0)
		return (0);
	min = 0;
	max = nb;
	while (min <= max)
	{
		milieu = (min + max) / 2;
		racine = milieu * milieu;
		if (racine == nb)
			return (milieu);
		else if (racine < nb)
			min = milieu + 1;
		else
			max = milieu - 1;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int nb;

    nb = 100000000;
    printf("%d\n", ft_sqrt(nb));
}
*/
