/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:48:47 by ablabib           #+#    #+#             */
/*   Updated: 2024/10/30 08:48:47 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    t_list *curr;

    if(!lst || !del)
        return;
    curr = *lst;
    while(curr)
    {
        tmp = curr;
        curr = curr->next;
        ft_lstdelone(tmp, del);
    }
    *lst = NULL;
}