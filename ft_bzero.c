/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:06:55 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/04 10:16:36 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}
/*int main()
{
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    for(int i = 0; i < 6; i++)
        printf("%c,", a[i]);
        printf("\n");
    ft_bzero(a,3);
    for(int i = 0; i < 6; i++)
        printf("%c", a[i]);
}*/
