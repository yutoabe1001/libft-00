/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:11:24 by yabe              #+#    #+#             */
/*   Updated: 2024/01/14 21:36:18 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	concat_size;
	size_t	i;

	src_len = ft_strlen(src);
	if (dst == NULL)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	concat_size = dstsize - dst_len - 1;
	while (src[i] != '\0' && i < concat_size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// void expected(int dstsize)
// {
// 	char str1[20] = "abc";
// 	char str2[] = "defgh";
// 	int len = 0;	
// 	len = strlcat(str1, str2, dstsize);
// 	printf("%s : %d\n", str1, len);
// }

// void actual(int dstsize)
// {
// 	char str1[20] = "abc";
// 	char str2[] = "defgh";
// 	int len = 0;
// 	len = ft_strlcat(str1, str2, dstsize);
// 	printf("%s : %d\n", str1, len);
// }

// int main(void)
// {
// 	int n = 10;
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("i : %d\n", i);
// 		expected(i);
// 		actual(i);
// 	}
// 	//if dst is null
// 	printf("if dst is null\n");
// 	char *str1 = NULL;
// 	char str2[] = "defgh";
// 	int len1 = 0;
// 	len1 = strlcat(str1, str2, 0);
// 	printf("%s : %d\n", str1, len1);

// 	char *str3 = NULL;
// 	char str4[] = "defgh";
// 	int len2 = 0;
// 	len2 = ft_strlcat(str1, str2, 0);
// 	printf("%s : %d\n", str1, len2);
// 	return (0);
// }