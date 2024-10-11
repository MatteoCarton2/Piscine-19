/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:20:36 by lowatell          #+#    #+#             */
/*   Updated: 2024/07/20 16:55:14 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	ft_dict_size(char *dict)
{
	char	buf;
	int		fd;
	int		nb_read;
	int		size;

	size = 0;
	fd = open(dict, O_RDONLY);
	nb_read = read(fd, &buf, 1);
	if (fd == -1)
		return (-1);
	while (nb_read > 0)
	{
		size++;
		nb_read = read(fd, &buf, 1);
	}
	close(fd);
	return (size);
}

char	*ft_dict_to_str(char *dict)
{
	char	buf;
	char	*content;
	int		fd;
	int		nb_read;
	int		i;

	i = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	content = (char *)malloc(sizeof(char) * (ft_dict_size(dict) + 1));
	if (!content)
		return (NULL);
	nb_read = read(fd, &buf, 1);
	while (nb_read > 0)
	{
		content[i++] = buf;
		nb_read = read(fd, &buf, 1);
	}
	if (nb_read == -1)
		return (0);
	content[i] = '\0';
	close(fd);
	return (content);
}
