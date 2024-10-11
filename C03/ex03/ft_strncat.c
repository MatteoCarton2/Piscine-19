/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:43:47 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/09 18:50:08 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char dest[15] = "Matt";
    char src[] = "eofefef";
    unsigned int nb;

    nb = 3;

    ft_strncat(dest, src, nb);
    printf("%s\n", dest);
    
    strcpy(dest, "Matt");
    strncat(dest, src, nb);
    printf("%s\n", dest);
}
*/
