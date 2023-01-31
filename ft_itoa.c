/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:11 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/31 11:35:40 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*reverse(char *s)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = ft_strlen(s);
	while (j > i)
	{
		j--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	int		negative;
	char	*temp;
	size_t 	lon;

	i = 0;
	negative = 0;
	lon = strlen(x);
	temp = (char *)malloc(11);
	if (temp == NULL || n == 0)
	{
		if (n == 0)
			return ("0");
		else
			return (NULL);
	}
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	while (n)
	{
		temp[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		temp[i] = '-';
	return (reverse(temp));
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
