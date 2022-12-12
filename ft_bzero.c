/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:37 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/12 12:57:56 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <libft.h>

/*
     The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing.
*/

void	ft_bzero(void *str, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	p = str;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char str1[50];
// 	char str2[50];
// 	strcpy(str1, "info1");
// 	strcpy(str2, "info2");
// 	ft_bzero(str1,50);
// 	bzero(str2,50);
// 	printf("result%s", str1);
// 	printf("result%s", str2);
// }
