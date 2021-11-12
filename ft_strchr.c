/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:13:28 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/12 14:56:47 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (s2[i] != '\0')
	{
		if (s2[i] == (unsigned char)c)
		{
			return ((void *)s2 + i);
		}
		i++;
	}
	if (s[i] == c)
		return ((void *)s2 + i);
	return (0);
}
