/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgregoro <mgregoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:20:55 by mgregoro          #+#    #+#             */
/*   Updated: 2021/02/11 14:11:33 by mgregoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_gnl
{
	int		a;
	int		zero;
	char	*result;
	int		len;
}				t_gnl;

int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *srcs, size_t n);
void			*ft_memmove(void *dest, const void *srcs, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(char *str);

#endif
