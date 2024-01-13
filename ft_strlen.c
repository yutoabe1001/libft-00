/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:37:19 by yabe              #+#    #+#             */
/*   Updated: 2024/01/08 16:07:51 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

// int main(void)
// {
// 	char s[] = "abcde";

// 	printf("strlen : %zu\n", strlen(s));
// 	printf("ft_strlen : %zu\n", ft_strlen(s));
// 	return (0);
// }