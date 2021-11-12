/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:08:10 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/05 17:57:10 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	else if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dst);
}
/*int main()
{
    char a[] = "abcdef";
    char b[] = "abcdef";
    printf("%s\n", a);
    ft_memmove(a + 2, a, 3 * sizeof(char));
  memmove(b + 2, b, 3 * sizeof(char));
    printf("%s", a);
   printf("\n%s", b);*/
//}
/*int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
/*int main()
{
    char a[] = "test";
    char b[] = "hello";
    memmove(a,b,5);
    printf("%s\n", a);
    ft_memmove(a,b,5);
    printf("%s", a);
}*/
