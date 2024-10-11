/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:11:43 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/12 19:46:00 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	nombre;

	i = 0;
	signe = 0;
	nombre = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nombre = nombre * 10;
		nombre = nombre + str[i] - 48;
		i++;
	}
	if (signe % 2 == 0)
		return (nombre);
	return (-nombre);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
}
*/
