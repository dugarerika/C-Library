/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:11:42 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/12 15:03:22 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <libft.h>

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
