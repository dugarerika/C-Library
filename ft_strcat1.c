/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:34 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/27 12:11:32 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_length(char *s)
{
	int	k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = ft_length(dest);
	l = ft_length(dest) + ft_length(src);
	while (j <= l)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[l + 1] = '\0';
	return (dest);
}

// int main()
// {
// 	char dest[] = "a";
// 	char src[] = "";
// 	printf("%s", ft_strcat(dest, src));
// }
