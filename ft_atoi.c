/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:13:52 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/13 17:16:50 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	neg;
	int	result;
	int	k;

	k = 0;
	neg = 1;
	result = 0;
	while (str[k] == 32 || (str[k] >= 9 && str[k] <= 13))
	{
		k++;
	}
	if (str[k] == 45 || str[k] == 43)
	{
		if (str[k] == 45)
		{
			neg = neg * -1;
		}
	k++;
	}
	while (str[k] <= 57 && str[k] >= 48)
	{
		result = (result * 10) + (str[k] - 48);
		k++;
	}
	return (result * neg);
}

// int	main()
// {
// 	char str[] = " -+++++-01234ab567";
// 	printf("%d",ft_atoi(str));
// /* 	printf("%s", "\n");
// 	printf("%d", atoi(str)); */
// }
