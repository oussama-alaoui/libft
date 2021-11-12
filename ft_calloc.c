/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:40:37 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/05 18:59:39 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;

	p = malloc(nelem * elsize);
	if (p == 0)
		return (0);
	ft_bzero(p, nelem * elsize);
	return (p);
}
