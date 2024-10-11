/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:21:53 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/20 22:34:47 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	num;

	if (!is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= base_len)
	{
		ft_putnbr_base(num / base_len, base);
		ft_putnbr_base(num % base_len, base);
	}
	else
	{
		write(1, &base[num], 1);
	}
}
/*
int main(void) 
{
  int nbr = -11;
  char base[] = "0";
  ft_putnbr_base(nbr, base);
  
  return 0;
}
*/
