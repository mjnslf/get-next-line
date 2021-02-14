/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgregoro <mgregoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:20:42 by mgregoro          #+#    #+#             */
/*   Updated: 2021/02/11 12:17:57 by mgregoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int		a;

	a = 0;
	if (!s)
		return (0);
	while (s[a] != '\0')
		a++;
	return (a);
}

void	*ft_memcpy(void *dest, const void *srcs, size_t n)
{
	size_t	a;

	a = 0;
	if (!dest && !srcs)
		return (NULL);
	while (a < n)
	{
		((char *)dest)[a] = ((char *)srcs)[a];
		a++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *srcs, size_t len)
{
	if (srcs < dest)
	{
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)srcs)[len];
	}
	else
		ft_memcpy(dest, srcs, len);
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*total;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (0);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	total = malloc(len1 + len2 + 1);
	if (!total)
		return (0);
	ft_memmove(total, s1, len1);
	ft_memmove(total + len1, s2, len2);
	total[len1 + len2] = '\0';
	free((char *)s1);
	return (total);
}

char	*ft_strdup(char *str)
{
	int		a;
	char	*total;

	a = 0;
	if (!str)
		return (0);
	total = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (total == NULL)
		return (0);
	while (str[a] != '\0' && str[a] != '\n')
	{
		total[a] = str[a];
		a++;
	}
	total[a] = '\0';
	return (total);
}
