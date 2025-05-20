/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:29:03 by ablabib           #+#    #+#             */
/*   Updated: 2024/10/27 16:36:16 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		// We cast to unsigned char* because we want to set memory byte by byte.
		// Using unsigned avoids issues with sign extension and ensures values are in [0, 255].
		*((unsigned char *)(s + i)) = 0;
		i++;
	}
}
