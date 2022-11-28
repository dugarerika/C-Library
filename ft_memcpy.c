/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:06:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/28 16:40:47 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = dest;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdest[i] = pdest[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[50];
// 	char	src[50];

// 	strcpy(dest; "destino information informacion");
// 	puts(dest);
// 	strcpy(src, "fuente information informacion")
// 	puts(src);
// }
