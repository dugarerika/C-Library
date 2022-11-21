/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:29:56 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/29 19:04:20 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	k;
	int	result;

	k = 0;
	result = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}

// int	main(void)
// {
// 	char *str = "Hello";

// 	printf("%d\n", ft_strlen(str));
// 	//printf("%lu\n", strlen(str));
// }
