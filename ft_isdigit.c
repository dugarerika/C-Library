/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:40:59 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/09 10:45:09 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	int	result;

	result = 1;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		result = 0;
	else
	result = 1;
	return (result);
}

// int	main(void)
// {
// char *str = "12Q+abc12";
// printf("result%d", isdigit(str[2]));
// printf("result%d", ft_isdigit(str[2]));
// return 0;
// }
