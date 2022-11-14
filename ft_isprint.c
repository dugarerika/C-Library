/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:50:10 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/09 10:45:28 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	int	result;

	result = 1;
	if (c >= 32 && c <= 126)
	result = 1;
	else
	result = 0;
	return (result);
}

// int	main(void)
// {
// 	char	*str = "\n1234";
// 	printf ("result %d", isprint(str[0]));
// 	printf ("result %d", ft_isprint(str[0]));
// }
