/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:28 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/05 12:04:09 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	i = n - 1;
	a = (char *) dest;
	b = (char *) src;
	if (a == b || n == 0)
		return (a);
	if (!a && !b)
		return (0);
	while (i >= 0)
	{
		a[i] = b[i];
		i--;
	}
	return (a);
}
/*int main()
{
    char a[] = "test";
    char b[] = "hello";
    printf("%s\n", memcpy(a,b,5));
    printf("%s", ft_memcpy(a,b,5));
}*/
