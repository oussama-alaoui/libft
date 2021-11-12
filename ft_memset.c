/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:04:09 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/04 11:25:36 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *) s;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s2);
}
/*int main()
{
    char a[10];
    ft_memset(a, 's', 10 * sizeof(char));
    for(int i = 0; i <= 9; i++)
    {
        printf("%c", (char) a[i]);
    }
}*/
