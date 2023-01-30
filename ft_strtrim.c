/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:26 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/27 14:45:23 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char 	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ts1;

	if (s1 == set)
		return (0);
	if (s1 == NULL)
		return (0);
	ts1= 0;
	if (s1!= 0 && set != 0)
	{
		// printf("%zu", i);
		// printf("%zu", j);
		i = 0;
		j = strlen(s1);
		while (s1[i] && strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && strchr(set, s1[j - 1]) && j > i)	
			j--;
		ts1 = (char *)malloc(j - i + 1);
		if (ts1)
			strlcpy(ts1, (char *)&s1[i], j - i + 1);
		// ts1[i+1] = '\0';
	}
return (ts1);
}

// int	main(void)
// {
// 	char const	*s1 = "01234";
// 	char const	*s2 = "01";
// 	char	*ret;
// 	ret = ft_strtrim(s1, s2);
// 	// printf("%s", ret);
// }
