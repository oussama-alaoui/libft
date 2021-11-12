/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:35:42 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/10 15:08:18 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	is_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

int	len(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		negative;
	char	*str;

	negative = 0;
	is_negative (&n, &negative);
	i = len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i += negative;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
