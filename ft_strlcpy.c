/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:39:18 by yabe              #+#    #+#             */
/*   Updated: 2024/01/14 21:34:48 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize > 1 && *src != '\0')
	{
		*dst++ = *src++;
		dstsize--;
		i++;
	}
	*dst = '\0';
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}

// void expected(int i)
// {	
// 	char str1[] = "ABCDEF";
// 	char str2[] = "12345678";
// 	int src_len;
// 	src_len = strlcpy(str1, str2, i);
// 	printf("%s : %d\n", str1, src_len);
// }

// void act(int i)
// {
// 	char str1[] = "ABCDEF";
// 	char str2[] = "12345678";
// 	int src_len;	
// 	src_len = ft_strlcpy(str1, str2, i);
// 	printf("%s : %d\n", str1, src_len);
// }

// int main(void)
// {
// 	int n = 10;
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("i : %d\n", i);
// 		expected(i);
// 		act(i);
// 		printf("\n");
// 	}
// 	return (0);
// }