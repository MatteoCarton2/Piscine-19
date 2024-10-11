/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:33:08 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/16 10:24:29 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb *(ft_recursive_power(nb, power - 1)));
}
/*
#include <stdio.h>
int main(void)
{
    int nb;
    int power;

    nb = 10;
    power = 3;
    printf("%d\n", ft_recursive_power(nb, power));
}
*/
