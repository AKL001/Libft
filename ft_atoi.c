/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:28:58 by ablabib           #+#    #+#             */
/*   Updated: 2024/10/29 20:13:42 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	size_t	i;
	size_t	sign_count;
	size_t	nb;
	size_t	sign;

	sign = 1;
	nb = 0;
	sign = 1;
	i = 1;
	if (src[0] == '-')
		sign = -1;
	while (src[i] >= '0' && src[i] <= '9')
	{
		nb = (nb * 10) + (src[i] - '0');
		i++;
	}
	return (nb * sign);
}
