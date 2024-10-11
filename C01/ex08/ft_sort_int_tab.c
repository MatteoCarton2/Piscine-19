/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:08:56 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/17 18:27:24 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int    main(void)
{
    int tab[] = { 4, 6, 5, 3, 2, 1 };
    int size = 6;
    
    ft_sort_int_tab(tab, size);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    printf("%d\n", tab[4]);
    printf("%d\n", tab[5]);
}
*/
