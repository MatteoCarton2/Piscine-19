/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:04:03 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/08 19:42:44 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
  char str[] = "TÅf";
  printf("%d", ft_str_is_printable(str));
}
*/
