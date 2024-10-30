/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:33:35 by ablabib           #+#    #+#             */
/*   Updated: 2024/10/30 13:34:48 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	counter;
	size_t	i;
	int		flag;

	flag = 1;
	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			counter++;
			flag = 0;
		}
		else if (s[i] == c)
			flag = 1;
		i++;
	}
	return (counter);
}

static int	safe_allocate(char **ptr, int pos, size_t len)
{
	int	i;

	i = 0;
	*ptr = malloc(len);
	if (!*ptr)
	{
		while (i < pos)
		{
			free(ptr[i++]);
		}
		free(ptr);
		return (1);
	}
	return (0);
}

static int	allocate_words(char **ptr, char *s, char c)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (safe_allocate(&ptr[i], i, len + 1))
				return (1);
			ft_memcpy(ptr[i], s - len, len);
			ptr[i][len] = '\0';
			i++;
		}
	}
	ptr[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ptr;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	ptr[words] = NULL;
	if (allocate_words(ptr, (char *)s, c))
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
