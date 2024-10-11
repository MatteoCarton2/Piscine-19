/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:52:51 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/25 16:06:13 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*tableau;
	int			i;

	i = 0;
	tableau = (t_stock_str *)malloc((argc + 1) * sizeof(t_stock_str));
	if (!tableau)
		return (NULL);
	while (i < argc)
	{
		tableau[i].size = ft_strlen(argv[i]);
		tableau[i].str = argv[i];
		tableau[i].copy = ft_strdup(argv[i]);
		i++;
	}
	tableau[argc].str = 0;
	return (tableau);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
   t_stock_str *res;
   int i;

   res = ft_strs_to_tab(argc - 1, argv + 1);

   i = 0;

   while (i < argc - 1)
   {
   printf("Size: %d, Str: %s, Copy: %s\n", res[i].size, res[i].str, res[i].copy);
   i++;
   }

   return (0);
}
*/
