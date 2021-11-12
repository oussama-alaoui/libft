/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:54:07 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/12 14:55:18 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_min(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s) - start;
	if (len < slen)
		return (len);
	else
		return (slen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	min;

	if (!s)
		return (0);
	dest = NULL;
	if ((size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	min = ft_min(s, start, len);
	dest = malloc(sizeof(char) * min + 1);
	if (dest == 0)
		return (0);
	ft_memcpy(dest, s + start, min);
	dest[len] = '\0';
	return (dest);
}
