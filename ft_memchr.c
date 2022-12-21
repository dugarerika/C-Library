/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:03:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/21 15:40:34 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ps;
	char	*bs;
	size_t		a;

	a = ft_strlen(s);
	ps = ((char *) s) + a;
	bs = ((char *) s) + a + 1;
	while (a > n)
	{
		if (*ps == (unsigned char) c)
		{
			return (ps);
		}
		ps--;
		a--;
	}
	if (c == '\0')
	{
		return (bs);
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
