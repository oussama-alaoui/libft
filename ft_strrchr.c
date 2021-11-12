/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:26:18 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/12 14:56:12 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c )
{
	int			i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char ) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*#include <string.h>
int main()
{
    char c[] = "hellllllolll boy";
    
    printf("%s", ft_strrchr(c,'u'));
}*/
