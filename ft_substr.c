/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:22 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/25 12:59:17 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen1(const char *str)
{
	size_t	r;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}
	return (r);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tr;
	size_t	i;
	size_t	j;
	size_t	l;

	l = ft_strlen1(s);
	i = (size_t) start;
	tr = (char *) malloc(len + 1);

	if (tr == NULL || s == NULL || start == len)
		return (0);
	if(l < len)
		len = l;
		printf("%zu", l);
		printf("%zu", len);
	j = 0;
	while (j < len)
	{
		// printf("%c", (char) s[i]);
		tr[j] = s[i];
		i++;
		j++;
	}
	tr[i] = '\0';
	printf("%zu", j);
		// printf("%zu", len);
	return ((char *)tr);




}

int	main(void)
{
	char	*str = "i just want this part #############";
	size_t	size = 10;
	char	*ret;
	ret = ft_substr(str, 10, size);
	printf("%s", ret);
}
