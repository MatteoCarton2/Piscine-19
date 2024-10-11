/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:04:00 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/14 16:21:46 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char str[] = "Ma phr de phrase est bien";
    char to_find[] = "phrase";

	char *resultat = ft_strstr(str, to_find);
	
	printf("%s\n", resultat);
	char *resultatattendu = strstr(str, to_find);
    printf("%s\n", resultatattendu);
}
*/
