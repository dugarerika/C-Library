/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:26 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/31 10:39:12 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ts1;

	ts1 = 0;
	if (s1 == 0)
		return (ts1);
	if (set == 0)
		return (ts1);
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		ts1 = (char *) malloc(j - i + 1);
		if (ts1)
			ft_strlcpy(ts1, (char *)&s1[i], j - i + 1);
	}
	return (ts1);
}

// int	main(void)
// {
// 	char const	*s1 = "";
// 	char const	*s2 = "";
// 	char	*ret;
// 	ret = ft_strtrim(s1, s2);
// 	int r = strcmp(ret, "");
// 	printf("%d", r);
// }
