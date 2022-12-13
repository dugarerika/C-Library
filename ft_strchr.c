/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:24 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/13 10:50:37 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s1, int c)
{
	int	i;
	int	pos;
	char *str1;

	str1 = (char *) s1;

	i = 0;
	while (str1[i]!= '\0')
	{
		if (str1[i] == c)
			pos = i;
		else
			return (NULL);
		i++;
	}
		return (str1);
}
