/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 06:27:06 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/21 06:46:39 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			k;
	unsigned char	*ps1;
	unsigned char	*ps2;

	k = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (k < n)
	{
		if (ps1[k] != ps2[k])
		{
			return (ps1[k] - ps2[k]);
		}
		else if (ps1[k] == '\0' && ps2[k] == '\0')
		{
			return (0);
		}
		k++;
	}
	return (0);
}

// int	main(void)
// {
// const char *s1 = "THis is the string s1";
// const char *s2 = "This is the string s2";
// printf("%d",ft_strncmp(s1,s2,2));
// printf("%d",strncmp(s1,s2,2));
// }
