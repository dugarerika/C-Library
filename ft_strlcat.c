/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:12:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/14 11:19:24 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlcat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
				// printf("%d", j);
		j++;

	}
	while (src[i] != '\0' && i < n)
	{
		// printf("%d", j + i);
		// dest[j + i] = src[i];
		i++;

	}
	return (j + 1);
}

int	main(void)
{
	char	dest[50];
	char 	src[50];
	strcpy(dest, "123456789");
	strcpy(src, "fuen");
	printf("result %lu", strlen(dest));
	printf("result %lu", strlen(src));
	printf("%s", "-");
	printf("%lu", strlcat(dest, src, 10));
	// printf("%s", "-");
	printf("%d", ft_strlcat(dest, src, 10));
	// puts(dest);
}
