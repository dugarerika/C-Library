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

int	ft_len(int n)
{
	int	lon;

	if (n <= 0)
		lon = 1;
	else
		lon = 0;
	while (n != 0)
	{
		n = n / 10;
		lon++;
	}
	return (lon);
}

char	*ft_itoa(int n)
{
	int		i;
	int negative;
	char	*temp;
	int 	lon;

	i = 0;
	negative = 0;
	if (n == 0)
		return (strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	lon = ft_len(n);
	temp = (char *)malloc(sizeof(char) * lon + 1);
	if (temp == NULL)
		return (NULL);
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	temp[lon--] = '\0';
	while (lon >= 0)
	{
		temp[lon] = (n % 10) + '0';
		n /= 10;
		lon--;
	}
	if (negative)
	{
		temp[0] = '-';
	}
	// printf("%lu", strlen(temp));
	// printf("%s", temp);

	return (temp);
}

// int	main(void)
// {
// 	int longitud;
// 	int s1 = 0;
// 	char	*ret;
// 	ret = ft_itoa(s1);
// 	longitud = strlen(ret);
// 	// int r = strcmp(ret, "");
// 	printf("%s", ret);
// 	printf("%d", longitud);
// }
