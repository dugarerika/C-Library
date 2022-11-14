/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 05:57:19 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/14 06:26:12 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strrchr(char *src, int c)
{
	int	i;
	int	pos;

	i = 0;
	while (src[i]!= '\0')
	{
		if (src[i] == c)
			pos = i;
		else
			return (NULL);
		i++;
	}
	return (src);
}

int	main(void)
{
	char	src[] = "ERIKAMARIA";
	char	c = 'A';
	printf("%s", ft_strrchr(src, c));
	printf("%s", strrchr(src,c));

}
