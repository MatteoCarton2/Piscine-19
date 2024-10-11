/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:44:58 by lowatell          #+#    #+#             */
/*   Updated: 2024/07/21 11:19:49 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdlib.h>

int				ft_dict_size(char *dict);
char			*ft_dict_to_str(char *dict);
char			**ft_split(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_numb_char(char *str);
char			*ft_char(char *str);
struct	s_numb	*ft_fill_struct(char **tab);
void			ft_putstr(char *str);
void			ft_putchar(char c);

typedef struct s_numb
{
	char	*str;
	char	*number;
	int		len;
}	t_numb;

#endif
