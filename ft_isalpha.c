/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 06:25:04 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/09 10:40:59 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	int	result;

	result = 1;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		result = 1;
	else
	result = 0;
	return (result);
}

// int	main(void)
// {
// char *str = "12Q+abc12";
// printf("result%d", isalpha(str[2]));
// printf("result%d", ft_isalpha(str[2]));
// return 0;
// }
