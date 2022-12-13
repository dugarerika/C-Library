/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 05:57:19 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/13 10:53:11 by etavera-         ###   ########.fr       */
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

