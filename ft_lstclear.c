/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:55:04 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/12 14:48:31 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*copy;

	if (lst)
	{
		while (*lst)
		{
			copy = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = copy;
		}
	}
}
