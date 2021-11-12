/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:57:42 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/07 18:12:41 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
/*#include <stdio.h>
char *f(unsigned int i, char s)
{
	return (s + i);
}
int main()
{
	char *a = ft_strmapi(a,f);
	printf("%s", a);
}*/
