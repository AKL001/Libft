#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	total_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	total_len = src_len + dst_len;
	if (size == 0)
		return (src_len);
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	i = 0;
	while ((dst_len + i + 1) < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (total_len);
}

void	run_test(char *dst, const char *src, size_t size)
{
	size_t	result;

	char original_dst[50];     // To preserve original dst for output
	strcpy(original_dst, dst); // Copy for output
	result = ft_strlcat(dst, src, size);
	printf("dst = '%s', src = '%s', size = %zu\n", original_dst, src, size);
	printf("Resulting dst: '%s'\n", dst);
	printf("Return value: %zu\n\n", result);
}
