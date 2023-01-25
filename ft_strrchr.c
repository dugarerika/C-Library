/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 05:57:19 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/23 11:52:36 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	length1(const char *s)
{
	int	k;

	k = 0 ;
	while (s[k] != '\0')
		k++;
	return (k - 1);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	char	*bs;
	int		a;

	a = length1(s);
	ps = ((char *) s) + a;
	bs = ((char *) s) + a + 1;
	if (c == '\0')
		return (bs);
	if (c == 0)
		return ((char *)s);
	while (a >= 0)
	{
		if (*ps == (char) c)
		{
			return (ps);
		}
		ps--;
		a--;
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
