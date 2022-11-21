/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:25 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/28 07:05:52 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while (k < n)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		else if (s1[k] == '\0' && s2[k] == '\0')
		{
			return (0);
		}
		k++;
	}
	return (0);
}

// int main(void)
// {
// char s1[] = "ABwdf";
// char s2[] = "Ajk";
// printf("%d", ft_strncmp(s1,s2, 1));
// printf("%d", strncmp(s1,s2, 1));
// }
