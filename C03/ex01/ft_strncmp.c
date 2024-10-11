/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:33:21 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/09 18:20:18 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0'
		&& s2[i] != '\0' && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "ABkrgregk";
	char s2[] = "AB5FKkfe";
	unsigned int n;
	n = 6;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
*/
