/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:25:26 by yabe              #+#    #+#             */
/*   Updated: 2024/01/08 21:17:30 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = '\0';
		p++;
	}
}

// int	main(void)
// {
// 	char buffer1[] = "12345";
// 	char buffer2[] = "12345";

// 	bzero(buffer1, sizeof(buffer1));
// 	ft_bzero(buffer2, sizeof(buffer2));
// 	for (size_t i = 0; i < sizeof(buffer1); ++i) {
//         printf("%d ", buffer1[i]);
//     }
// 	printf("\n");
// 		for (size_t i = 0; i < sizeof(buffer2); ++i) {
//         printf("%d ", buffer2[i]);
//     }
// 	return (0);
// }
