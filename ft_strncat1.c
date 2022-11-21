/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:37 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/27 12:14:15 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = ft_length(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char dest1[] = "sdfcAkjh";
// 	char src1[] = "123456";
// 	printf("%u", ft_length(src1));
// 	printf("%s", ft_strncat(dest1,src1,3));
// }
