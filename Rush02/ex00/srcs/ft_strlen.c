/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasilva- <tasilva-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:15:36 by tasilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/21 12:09:50 by lowatell         ###   ########.fr       */
=======
/*   Updated: 2024/07/21 11:21:52 by lowatell         ###   ########.fr       */
>>>>>>> 3207f4ad3079dc6c1b7febaa6a316d38e365d609
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
