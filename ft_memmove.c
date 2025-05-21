/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:30:17 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/01 21:23:47 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_memmove:
** Copies 'n' bytes from memory area 'src' to memory area 'dest'.
** Unlike memcpy, memmove is safe to use when the source and destination
** memory areas overlap. This is because memmove checks the direction of 
** copying and performs it in a way that avoids overwriting the source data.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
		{
			*((unsigned char *)(dest + n)) = *((unsigned char *)(src + n));
		}
	}
	return (dest);
}
