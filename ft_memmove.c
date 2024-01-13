/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:25:12 by yabe              #+#    #+#             */
/*   Updated: 2024/01/12 16:32:14 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d == s)
		return (dst);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char str1[] = "123456789";
// 	char str2[] = "123456789";
// 	char str3[] = "123456789";
// 	char str4[] = "123456789";
// 	char str5[] = "123456789";
// 	char str6[] = "123456789";
// 	//src == dest
// 	memmove(str1, str1, 3);
// 	ft_memmove(str2, str2, 3);
// 	printf("src == dest\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);	
// 	// src < dest
// 	memmove(str3 + 3, str3, 5);
// 	ft_memmove(str4 + 3, str4, 5);
// 	printf("src < dest\n");
// 	printf("%s\n", str3);
// 	printf("%s\n", str4);	
// 	// src > dest
// 	memmove(str5, str5 + 3, 5);
// 	ft_memmove(str6, str6 + 3, 5);
// 	printf("src > dest\n");
// 	printf("%s\n", str6);
// 	printf("%s\n", str6);
// 	return (0);
// }

// void tester(char *str, size_t offset, size_t length)
// {
// 	char dst[20]; 
// 	ft_memmove(dst + offset, str, length);
// 	printf("%s\n", dst);
// }

// int main(void)
// {
// 	tester("ABCDEF", 3, 2);
// 	return (0);
// }
