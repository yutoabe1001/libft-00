/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabe <yabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:53:06 by yabe              #+#    #+#             */
/*   Updated: 2024/01/07 19:01:21 by yabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	int	c1 = 'A';
// 	int c2 = '0';
// 	int c3 = 'Z';
// 	int c4 = 'a';
// 	int c5 = 'j';
// 	int c6 = 'z';

// 	printf("isalpha : %d %d %d\n"
// , isalpha(c1), isalpha(c2), isalpha(c3));
// 	printf("ft_isalpha : %d %d %d\n"
// , ft_isalpha(c1), ft_isalpha(c2), ft_isalpha(c3));
// 	return(0);
// }