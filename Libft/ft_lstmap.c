/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:45:33 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:46:59 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*copy_list;
	t_list	*cp_list;

	copy_list = NULL;
	while (lst && f)
	{
		cp_list = ft_lstnew(f(lst->content));
		if (!cp_list)
		{
			ft_lstclear(&copy_list, del);
			return (NULL);
		}
		ft_lstadd_back(&copy_list, cp_list);
		lst = lst->next;
	}
	return (copy_list);
}
