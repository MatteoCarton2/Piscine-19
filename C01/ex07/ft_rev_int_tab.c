/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:25:19 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/18 20:39:36 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = size -1;
	j = 0;
	while (i > j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i--;
		j++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = { 1, 2, 3, 4, 5 };
	int size = 5;
	
	ft_rev_int_tab(tab, size);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	printf("%d\n", tab[4]);
}
*/
