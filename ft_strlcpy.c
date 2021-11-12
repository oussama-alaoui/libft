/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:37:55 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/04 14:37:55 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = ft_strlen(src);
	if (count + 1 < dstsize)
	{
		ft_memcpy(dst, src, count + 1);
	}
	else if (count != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (count);
}
/*int main ()
{
    char str1[100] = "This is ", str2[] = "programiz.com";

    int i = ft_strlcpy(str1,str2,5);
    //int j = strlcat(dest,src,2);
    printf("%d\n", i);
   // printf("%d\n", j);
}*/