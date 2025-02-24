/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:53:42 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/10 14:55:22 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' & str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if ((!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i ++;
	}
	return (str);
}
/*
#include <stdio.h>
int    main(void)
{
    char str[] = "ut, cEJt tu vAs ? 42ms Gte-deUx; c!FF!ke+et+un";
    printf("%s\n", ft_strcapitalize(str));
}
*/
