/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:20:44 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/01 18:23:28 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	// Guard against integer overflow in multiplication: nmemb * size
	// If this overflows, malloc may allocate less memory than expected,
	// leading to buffer overflows and undefined behavior.
	if (nmemb > 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	if (nmemb == 0 && size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
