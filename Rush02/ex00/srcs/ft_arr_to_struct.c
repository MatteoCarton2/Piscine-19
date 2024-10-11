/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_to_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:07:51 by lowatell          #+#    #+#             */
/*   Updated: 2024/07/20 17:54:51 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_char(char *str)
{
	char	*arr;
	int		i;
	int		size;
	int		j;

	size = 0;
	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (str[i - 1] != ':')
	{
		size++;
		i--;
	}
	while (str[++i] == ' ')
		size--;
	arr = (char *)malloc(sizeof(char) * size + 1);
	while (str[i])
		arr[j++] = str[i++];
	arr[j] = '\0';
	return (arr);
}

char	*ft_numb_char(char *str)
{
	int		i;
	int		size;
	char	*arr;

	size = 0;
	i = 0;
	while (str[size] && str[size] != ' ' && str[size] != ':')
		size++;
	arr = (char *)malloc(sizeof(char) * size + 1);
	if (!arr)
		return (NULL);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct	s_numb	*ft_fill_struct(char **tab)
{
	t_numb	*array;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (tab[size])
		size++;
	array = (t_numb *)malloc(sizeof(t_numb) * (size + 1));
	while (tab[i])
	{
		array[i].number = ft_numb_char(tab[i]);
		array[i].str = ft_char(tab[i]);
		array[i].len = ft_strlen(array[i].number);
		i++;
	}
	free(tab);
	array[i].number = 0;
	array[i].str = 0;
	array[i].len = 0;
	return (array);
}
