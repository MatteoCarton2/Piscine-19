/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:39:37 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/20 15:23:08 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tableau = malloc(size * sizeof(int));
	while (i < size)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	return (tableau);
}
/*
int main(void)
{
    int min;
    int max;

    min = 10;
    max = 30;
    ft_range(min, max);
}
*/
