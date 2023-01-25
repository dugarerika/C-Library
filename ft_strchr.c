/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:24 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/25 11:33:36 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ps;

	ps = (char *) s;
	while (*ps != '\0')
	{
		if (*ps == (char) c)
		{
			return (ps);
		}
		ps++;
	}
	if (*ps == (char) c)
	{
		return (ps);
	}
	return (NULL);
}

// int main(void)
// {
// const char s[] = "Todos";
// const char c = 'o';
// char *p1;
// char *p2;
// unsigned int r;
// p1 = ft_strchr(s,c);
// p2 = strchr(s,c);
// printf("%s", p1);
// printf("%s", p2);
// r = length1(s);
// printf("%u", r);
// int po;
// po = ft_position(s,c);
// printf("%u", po);
// }
