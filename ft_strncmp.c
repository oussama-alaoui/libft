/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:50:21 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/05 11:27:22 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i] && i < n - 1)
	{
		i++;
	}
	return (a[i] - b[i]);
}
