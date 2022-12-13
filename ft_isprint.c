/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:50:10 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/13 07:10:52 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/*
The isprint() function tests for any printing character, including space
(` ').  The value of the argument must be representable as an unsigned
char or the value of EOF.
*/

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
