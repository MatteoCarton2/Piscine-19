/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:00:13 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/21 11:19:05 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	check_sep(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int	count_strings(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i]))
			i++;
	}
	return (count + 1);
}

int	ft_word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i]))
		i++;
	return (i);
}

char	*do_word(char *str)
{
	char	*word;
	int		i;
	int		end;

	end = ft_word_len(str);
	i = 0;
	word = (char *)malloc(sizeof(char) * end + 1);
	if (!word)
		return (NULL);
	while (i < end)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * count_strings(str) + 1);
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && check_sep(*str))
			str++;
		if (*str)
		{
			tab[i] = do_word(str);
			i++;
		}
		while (*str && !check_sep(*str))
			str++;
	}
	tab[i] = 0;
	return (tab);
}
