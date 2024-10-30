/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:40:02 by ablabib           #+#    #+#             */
/*   Updated: 2024/10/30 09:40:02 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_node;
    t_list *new_list;
    if(!lst)
        return (NULL);
    new_list = NULL;
    while(lst)
    {
        if(f)
            new_node = ft_lstnew(f(lst->content));
        else 
            new_node = ft_lstnew(lst->content);
        if(!new_node)
        {
            ft_lstclear(&new_list,del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst  = lst->next;
    }
    return (new_list);
}