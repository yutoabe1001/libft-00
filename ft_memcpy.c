/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:19:50 by yabe              #+#    #+#             */
/*   Updated: 2024/01/12 16:32:40 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}

// int	tester(char *str1, char *str2, int n) {
// 	char *src1 = strdup(str1);
// 	char *src2 = strdup(str2);
// 	char *src3 = strdup(str1);
// 	char *src4 = strdup(str2);

// 	printf("==============\n");
// 	memcpy(src1, src2, n);
// 	ft_memcpy(src3, src4, n);

// 	printf("src1: %s\n", src1);
// 	printf("src3: %s\n", src3);

// 	if (strcmp(src1, src3) != 0)
// 	{
// 		printf("NG\n");
// 		printf("src1: %s\n", src1);
// 		printf("src3: %s\n", src3);
// 		return (1);
// 	}

// 	free(src1);
// 	free(src2);
// 	free(src3);
// 	free(src4);
// 	return (0);
// }

// int main(void)
// {
// 	if (tester("abcde", "12345", 3))
// 		return 1;
// 	// if (tester("abcde", "12345", 0) == 1)
// 	// 	return 1;
// 	return (0);
// }