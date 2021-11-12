/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:55:31 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/12 14:59:32 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelm;
	t_list	*newlst;

	newlst = 0;
	while (lst)
	{
		newelm = ft_lstnew(f(lst->content));
		if (newelm == 0)
		{
			ft_lstclear(&newlst, del);
			break ;
		}
		else
			ft_lstadd_back(&newlst, newelm);
		lst = lst->next;
	}
	return (newlst);
}
