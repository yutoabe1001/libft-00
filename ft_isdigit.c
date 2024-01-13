/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:29:18 by yabe              #+#    #+#             */
/*   Updated: 2024/01/07 19:01:03 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	int c1 = '0';
// 	int c2 = '5';
// 	int c3 = '9';
// 	int c4 = 'a';

// 	printf("isdigit : %d %d\n", isdigit(c1), isdigit(c2));
// 	printf("ft_isdigit : %d %d\n", ft_isdigit(c1), ft_isdigit(c2));
// 	return (0);
// }