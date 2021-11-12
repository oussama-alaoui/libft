/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:56:46 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/06 10:39:12 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		n;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == 0)
		return (0);
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = (char) src[n];
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
