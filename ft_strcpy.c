/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/22 17:38:03 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src [j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main()
// {
// 	char src[] = "HolaComoEsta";
// 	char dest[] = "hgghuj";

// 	ft_strcpy(dest, src);
// 	printf("%s\n",dest);
// 	return(0);
// }
