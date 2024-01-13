/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:07:17 by yabe              #+#    #+#             */
/*   Updated: 2024/01/08 15:36:10 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int c1 = 31;
// 	int c2 = 50;
// 	int c3 = 126;
// 	int c4 = 127;

// 	printf("isprint : %d\n", isprint(c3));
// 	printf("ft_isprint : %d\n", ft_isprint(c3));
// 	return (0);
// }
