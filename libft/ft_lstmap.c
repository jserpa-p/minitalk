/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:06:29 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/21 15:18:03 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*toret;
	t_list	*tmp;

	toret = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!(tmp))
			{
				ft_lstclear(&toret, del);
		return (NULL);
	}
	ft_lstadd_back(&toret, tmp);
	lst = lst->next;
}
return (toret);
}
