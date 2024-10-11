/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:50:02 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/05 22:56:14 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	longueur;

	longueur = ft_strlen("Test");
	printf("Dans ma phrase, il y'a %d caracteres", longueur);
}
*/
