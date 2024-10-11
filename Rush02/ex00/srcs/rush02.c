/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:37:47 by lowatell          #+#    #+#             */
/*   Updated: 2024/07/21 11:19:43 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	ft_check_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_clear_zero(char *str)
{
	char	*word;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] == '0')
		i++;
	while (str[i])
		word[j++] = str[i++];
	word[j] = '\0';
	return (word);
}

int	main(int ac, char **av)
{
	char	**arr;
	t_numb	*tab;
	int		i;

	(void)av;
	if (ac != 2 || !ft_check_arg(av[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	arr = ft_split(ft_dict_to_str("dicts/numbers.dict"));
	tab = ft_fill_struct(arr);
	free(tab);
}
