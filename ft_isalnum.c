/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:00:18 by yabe              #+#    #+#             */
/*   Updated: 2024/01/08 14:49:08 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int c1 = '2';
// 	int c2 = 'g';
// 	int c3 = '$';
// 	printf("isalnum : %d\n", isalnum(c3));
// 	printf("ft_isalnum : %d\n", ft_isalnum(c3));
// 	return (0);
// }