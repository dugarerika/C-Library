/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:11:42 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/09 10:41:09 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	int	result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	result = 1;
	else
	result = 0;
	return (result);
}

// int	main(void)
// {
// char str[] = "12 Q+abc12";
// printf("result%d", isalnum(str[2]));
// printf("result%d", ft_isalnum(str[2]));
// printf("result%d", isalnum(str[3]));
// printf("result%d", ft_isalnum(str[3]));
// printf("result%d", isalnum(str[4]));
// printf("result%d", ft_isalnum(str[4]));
// printf("result%d", isalnum(str[5]));
// printf("result%d", ft_isalnum(str[5]));
// return 0;
// }
