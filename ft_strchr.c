/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:24 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/14 14:18:05 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	length1(const char *s)
{
	unsigned int	k;

	k = 0 ;
	while (s[k] != '\0')
		k++;
	return (k);
}

unsigned int 	ft_position(const char *s, int c)
{
	unsigned int	i;
	unsigned char sc;

	sc = (unsigned char) c;
	i = length1(s);

	while (s[i] != sc)
		i--;
	return (i);
}

// char	ft_strchr(const char *s, int c)
// {
// 	unsigned int	j;
// 	unsigned int	l;
// 	char x;
// 	char *rs;

// 	l = 0;
// 	j = ft_position(s, c);
// 	rs = NULL;
// 	while (s[j] != '\0')
// 	{
// 		x = s[j];
// 		rs[l] = x;
// 		j++;
// 		l++;
// 		return (x);
// 	}
// return (X);
// }

// int main(void)
// {
// const char s[] = "Todos";
// const char c = 'o';
// char p1;
// char *p2;
// unsigned int r;
// p1 = ft_strchr(s,c);
// p2 = strchr(s,c);
// printf("%c", p1);
// printf("%s", p2);
// r = ft_length(s);
// printf("%u", r);
// int po;
// po = ft_position(s,c);
// printf("%u", po);
// }
