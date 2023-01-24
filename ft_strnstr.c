/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 06:50:20 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/23 12:16:15 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0' || to_find == 0 || (!str && len == 0))
	{
		return (str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
	i++;
	}
	return (0);
}

// int main(void)
// {
// 	// char str[] = "Total Ar1 @@@@";
// 	// char to_find[] = "rf1";
// 	// printf("%s", ft_strnstr(str,to_find, 0));
// 	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// 	printf("%s", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// 	return (0);
// }
