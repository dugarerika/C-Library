/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:43 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/28 07:05:59 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_length(char *s)
{
	unsigned int	k;

	k = 0 ;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = ft_length(dest);
	while (src[i] != '\0' && i < size)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (l + i +1);
}

// int	main(void)
// {
// 	char dest[] = "E dDF";
// 	char src[] = "123456";
// 	printf("%d", ft_strlcat(dest,src,3));
// 	printf("%lu", strlcat(dest,src,3));
// }
