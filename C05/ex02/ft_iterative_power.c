/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:33:02 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/14 16:39:08 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;

	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * j;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
    int nb;
    int power;

    nb = 10;
    power = 3;
    printf("%d\n", ft_iterative_power(nb, power));
}
*/
