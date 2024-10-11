/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:17:20 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/06 11:00:54 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporaire;

	temporaire = *b;
	*b = *a;
	*a = temporaire;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("Avant : a = %d et b = %d", a, b);
	ft_swap(&a, &b);
	printf("Apres : a = %d et b = %d", a, b);
}
*/
