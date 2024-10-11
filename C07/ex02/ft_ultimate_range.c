/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:46:36 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/20 15:22:46 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tableau;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tableau = (int *)malloc(size * sizeof(int));
	if (tableau == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	*range = tableau;
	return (size);
}
/*
#include <stdio.h>
int    main(void)
{
    int *range;
    int min;
    int max;

    min = 10;
    max = 30;
    printf("%d\n", ft_ultimate_range(&range, min, max));
}
*/
