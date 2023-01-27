/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:22 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/27 14:29:11 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tr;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (0);
	i = (size_t) start;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	tr = (char *) malloc(len + 1);
	if (tr == NULL)
		return (0);
	j = 0;
	while (j < len && i < ft_strlen(s))
	{
		tr[j] = s[i];
		i++;
		j++;
	}
	tr[j] = '\0';
	return ((char *)tr);
}

// int	main(void)
// {
// 	// char	*str = "01234";
// 	// size_t	size = 10;
// 	char	*ret;
// 	ret = ft_substr("tripouille", 0, 42000);
// 	printf("%s", ret);
// }
