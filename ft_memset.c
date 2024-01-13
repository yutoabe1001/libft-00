/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:08:45 by yabe              #+#    #+#             */
/*   Updated: 2024/01/08 18:24:08 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)b;
	uc = (unsigned char)c;
	while (len--)
	{
		*p = uc;
		p++;
	}
	return (b);
}

// int main(void)
// {
// 	char buffer1[] = "123";
// 	char buffer2[] = "123";
//  	memset(buffer1, 'B', sizeof(buffer1));
// 	ft_memset(buffer2, 'A', sizeof(buffer2));
// 	printf("%s\n%s\n", buffer1, buffer2);
// 	printf("%lu\n", sizeof(buffer1));

// 	return (0);
// }