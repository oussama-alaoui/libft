/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:38:10 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/05 18:01:58 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;
	size_t	totlen;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		totlen = ft_strlen(src) + dstsize;
	else
		totlen = ft_strlen(src) + ft_strlen(dst);
	dsti = 0;
	while (dst[dsti])
		dsti++;
	srci = 0;
	while (src[srci] && dsti < dstsize - 1)
	{
		dst[dsti] = src[srci];
		dsti++;
		srci++;
	}
	dst[dsti] = '\0';
	return (totlen);
}
/*int main ()
{
    char src[] = "hello";
    char dest[] = "boy";
    int i = ft_strlcat(dest,src,2);
    int j = strlcat(dest,src,2);
    printf("%d\n", i);
    printf("%d\n", j);
}*/
