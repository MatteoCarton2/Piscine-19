/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:35:41 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/14 21:46:25 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		i--;
	}
	return (0);
}
