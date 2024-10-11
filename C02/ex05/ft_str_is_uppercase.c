/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:55:31 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/08 18:50:37 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
  char str[] = "TgregST";
  printf("%d", ft_str_is_uppercase(str));
}
*/
