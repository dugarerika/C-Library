/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:06:18 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/25 12:42:00 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	j;

	k = 0;
	while (src[k] != '\0' && k < size)
	{
		dest[k] = src[k];
	k++;
	}
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	return (j);
}

// int main()
// {
// 	unsigned int n = 3;
// 	char dest[] = "HowAreYou?";
// 	char src[] = "HolaComoEstas";
// 	ft_strlcpy(dest, src, n);
// 	printf("%s", dest);
// 	printf("%d", ft_strlcpy(dest, src, n));
// 	return(0);
// }
