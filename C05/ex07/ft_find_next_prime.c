/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:56:42 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/16 16:22:03 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	diviseur;

	diviseur = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (diviseur * diviseur <= nb)
	{
		if (nb % diviseur == 0)
			return (0);
		diviseur = diviseur + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb ++;
	return (nb);
}
/*
#include <stdio.h>
int    main(void)
{
    int nb;

    nb = 2147483629;
    printf("%d\n", ft_find_next_prime(nb));
}
*/
