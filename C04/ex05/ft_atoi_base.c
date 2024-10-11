/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:07:27 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/21 12:41:53 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base_valide(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base[i] || !base[i + 1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	trouver_index(char lettre, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == lettre)
			return (i);
		i++;
	}
	return (-1);
}

int	convertir_en_base(char *str, int base_size, char *base)
{
	int	nombre;
	int	index;
	int	i;

	nombre = 0;
	i = 0;
	index = trouver_index(str[i], base);
	while (index != -1)
	{
		nombre = nombre * base_size + index;
		i++;
		index = trouver_index(str[i], base);
	}
	return (nombre);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	nombre;
	int	base_size;
	int	index;

	if (!check_base_valide(base))
		return (0);
	base_size = ft_strlen(base);
	i = 0;
	signe = 0;
	nombre = 0;
	index = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	nombre = convertir_en_base(&str[i], base_size, base);
	if (signe % 2 == 0)
		return (nombre);
	return (-nombre);
}
/*
#include <stdio.h>
int    main(void)
{
        // Test 1 : Base décimale
    printf("Test 1: %d\n", ft_atoi_base("123", "0123456789")); 

    // Test 2 : Base binaire
    printf("Test 2: %d\n", ft_atoi_base("1010", "01"));

    // Test 3 : Base hexadécimale
    printf("Test 3: %d\n", ft_atoi_base("1abd5", "0123456789abcdef")); 

    // Test 4 : Base octale
    printf("Test 4: %d\n", ft_atoi_base("17", "01234567")); 
}
*/
