/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:42:19 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/10 11:35:13 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (n != 0 && (i < (n - 1)))
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char	dest[50];
// 	char 	src[50];
// 	strcpy(dest, "destino this is the destination");
// 	strcpy(src, "fuente this is the source");
// 	printf("%lu",(strlcpy(dest, src, 3)));
// 	printf("%d",(ft_strlcpy(dest, src, 3)));
// }
