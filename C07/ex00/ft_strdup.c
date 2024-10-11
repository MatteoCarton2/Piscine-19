/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:21:59 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/18 20:47:15 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strduplicate;

	i = 0;
	while (src[i] != '\0')
		i++;
	strduplicate = malloc(i + sizeof(char));
	if (strduplicate == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		strduplicate[i] = src[i];
		i++;
	}
	strduplicate[i] = '\0';
	return (strduplicate);
}
/*
#include <stdio.h>
#include <string.h>
int    main(void)
{
    char src[] = "Ma phrase";
    char *duplicate = ft_strdup(src);
    printf("%s\n", duplicate);
    free(duplicate);
    printf("%s\n", strdup(src));
}
*/
