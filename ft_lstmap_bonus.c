/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c      		                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:20:49 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/23 16:20:49 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if	(lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = 0;
	while	(lst)
	{
		temp = f(lst->content);
		new_node = ft_lstnew(temp);
		if	(!new_node)
		{
			ft_lstclear(&new_lst, del);
			del(tem);
			return(0);
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_node);
	}
	return (new_lst);
}