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
// #include "libft.h"

char 	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ts1;

	if (s1 == set)
		return (0);
	if (s1 == NULL)
		return (0);
	ts1 = (char *) malloc(strlen(s1));
	if (ts1 == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0' || set[j] != '\0')
	{
		// printf("%zu", i);
		// printf("%zu", j);
		if (s1[i] != set[j])
		{
			ts1[i] = s1[i];
			i++;
		}
		if (s1[i] == set[j])
		{
			i++;
			j++;
		}

	}
	ts1[i] = '\0';
return (ts1);
}

int	main(void)
{
	char const	*s1 = "01234";
	char const	*s2 = "01";
	char	*ret;
	ret = ft_strtrim(s1, s2);
	printf("%s", ret);
}
