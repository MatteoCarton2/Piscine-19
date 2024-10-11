/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:23:28 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/16 15:21:13 by mcarton          ###   ########.fr       */
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
/*
#include <stdio.h>
int    main(void)
{
    int nb;

    nb = 455465;
    printf("%d\n", ft_is_prime(nb));
}
*/
