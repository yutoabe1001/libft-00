/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:51:23 by yabe              #+#    #+#             */
/*   Updated: 2024/01/13 17:28:19 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int c1 = '\0';
// 	int c2 = 'a';
// 	int c3 = '_';
// 	int c4 = 128;
// 	int c5 = -1;

// 	printf("isascii : %d\n", isascii(c5));
// 	printf("ft_isascii : %d\n", ft_isascii(c5));
// 	return (0);
// }
