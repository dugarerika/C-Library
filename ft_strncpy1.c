/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:04:28 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/25 16:01:17 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
	k++;
	}
	return (dest);
}

// int main()
// {
// 	unsigned int n = 3;
// 	char dest[] = "HowAreYou?";
// 	char src[] = "Hol";
// 	ft_strncpy(dest, src, n);
// 	printf("%s/n", dest);
// 	return(0);

// }
