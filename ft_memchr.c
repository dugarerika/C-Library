/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:03:13 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/23 11:43:42 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	*bs;

	ps = ((unsigned char *) s);
	bs = ((unsigned char *) s) + 1;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (*ps == (unsigned char) c)
		{
			return ((void *)ps);
		}
		ps++;
	}
	if (c == '\0')
	{
		return ((void *)bs);
	}
	return (NULL);
}

// int main(void)
// {
// const char *s = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";;
// const char c = '\0';
// char *p1;
// char *p2;
// int r;
// p1 = ft_strrchr(s,c);
// p2 = strrchr(s,c);
// printf("%s", p1);
// printf("%s", p2);
// r = length1(s);
// printf("%u", r);
// }
